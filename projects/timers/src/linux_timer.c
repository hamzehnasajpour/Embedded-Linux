
#include  <stdio.h>
#include  <unistd.h>
#include  <signal.h>
#include  <time.h>
#include  <sys/time.h>
#include  <errno.h>
#include  <string.h>
#include  "./debug.h"
 
void timer_callback(int  signum)
{
    struct timeval now;
    gettimeofday(&now, NULL);
    printf("Signal %d caught on %li.%03li \n", signum, now.tv_sec, now.tv_usec / 1000);

    // setitimer(ITIMER_REAL, NULL, NULL);
}
  
int main()
{
    struct itimerval new_timer;
    struct itimerval old_timer;
    signal(SIGALRM, timer_callback); 

    new_timer.it_value.tv_sec = 0;
    new_timer.it_value.tv_usec = 1;
    new_timer.it_interval.tv_sec = 1;
    new_timer.it_interval.tv_usec = 0; 
 
    setitimer(ITIMER_REAL, &new_timer, &old_timer);
 
    while (1); 
    return 0;
}