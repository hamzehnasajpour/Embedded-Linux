### Timers in Linux

#### Traditional Approach to Timers

Timer mechanisms in Linux and Unix-based systems have evolved to serve various needs. Different approaches can help you solve different types of problem. However, you'll often see the first version of the alarm() mechanism still in use.

The alarm function is the simplest way to use a timer; here's its prototype:

```c
unsigned int alarm(unsigned int seconds);
```
Using this method, you can only specify the time in whole seconds. When the time is up, the operating system sends the SIGALRM signal to your application. To process the timer's expiry in your application, you should also define a callback function.

Here is an example of a signal handler function:

```c
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h> 
  
void timer_callback(int signum)
{
    time_t now = time(NULL);
    printf("Signal %d caught on %li\n", signum, now);
}
 
int main()
{
    signal(SIGALRM, timer_callback);
    alarm(1);
    while(1);
    return 0;
}
```

This code raises a SIGALRM signal after 1 second. If you want to increase the timer delay to five seconds, just call alarm(5) instead. To stop the timer, pass a value of 0: alarm(0).

When the time is up, the timer you use will not restart periodically. For example, if you want to delay for another second, you should restart the mechanism with another call to alarm().

Despite its ease of use, this method has some disadvantages:

* Only one timer at a time.
* No periodic timer support.
* You can only give the time period in multiples of whole seconds.
* No way to know how much time remains on a timer.


#### Using an Interval Timer

The interval timer mechanism was first available in version 4.2 BSD. It was later standardized by POSIX. Its main advantages over the traditional alarm() based timer method are:


* Provides microsecond resolution.
* It allows controlling the time measurement in more detail over three different modes.
* It is possible to set it once and make it work periodically.
* It is possible to find out how long it is present at any given moment.

Function prototypes used for interval timer operations are as follows:

```c
#include <sys/time.h>
 
int setitimer(int  which, const struct itimerval *newValue, struct itimerval *oldValue);
int getitimer(int  which, struct itimerval *value);
 
struct itimerval
{
    struct timeval itInterval;  // next value
    struct timeval itValue;     // current value
};
 
struct timeval
{
    long tv_sec;
    long tv_usec;
};
```

If you want to set up an interval timer, you'll need to use the itimerval struct. You'll need to pass a value using this struct as the second argument to the settimer function.

For example, an interval timer that will notify your application for 1 second and then every 300 milliseconds can be set up as follows:

```c
struct itimerval newTimer;
struct itimerval oldTimer;
 
newTimer.itValue.tv_sec = 1;
newTimer.itValue.tv_usec = 0;
 
newTimer.itInterval.tv_sec = 0;
newTimer.itInterval.tv_usec = 300 * 1000;
 
setitimer(ITIMER_REAL, &newTimer, &oldTimer);
```

If there is an interval timer active before the new values are set, its values are transferred to the variable address of the itimerval type given to the third parameter of the function.

You can set up three different types of timers with the interval timer mechanism. Specify the timer type in the first parameter of setitimer():

```md
| Timer Type |	Signal |	Explanation|
|ITIMER_REAL |	SIGALRM| 	Independent of the time spent by the application, calculated over the total elapsed time.|
|ITIMER_VIRTUAL |	SIGVTALRM |	Calculated over the time the application is running in user mode only.|
|ITIMER_PROF |	SIGPROF |	Calculated over the sum of the time spent by the application in both user and system modes.|
```

```c
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
```

```c
//debug.h
#include<stdio.h>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED_BOLD "\033[1;31m"
#define COLOR_MAGENTA "\033[0;35m"

#define errorf(a...){fprintf(stderr, "%serror:%s ", COLOR_RED_BOLD, COLOR_DEFAULT);fprintf(stderr, a);fprintf(stderr, " %s(%s %s:%d)%s\n", COLOR_RED_BOLD, __FUNCTION__, __FILE__,__LINE__, COLOR_DEFAULT);fflush(stderr);}
#define debugf(a...){fprintf(stderr, "%sdebug:%s ", COLOR_MAGENTA, COLOR_DEFAULT);fprintf(stderr, a);fprintf(stderr, " %s(%s %s:%d)%s\n", COLOR_RED_BOLD, __FUNCTION__, __FILE__,__LINE__, COLOR_DEFAULT);fflush(stderr);}
```

**Important**
https://linux.die.net/man/2/setitimer
```
    The SIGALRM, SIGVTALRM and SIGPROF signal is sent to a process when the time limit specified in a call to a preceding alarm setting function (such as setitimer) elapses. SIGALRM is sent when real or clock time elapses. SIGVTALRM is sent when CPU time used by the process elapses. SIGPROF is sent when CPU time used by the process and by the system on behalf of the process elapses.
```

---


link: 
* https://www.makeuseof.com/linux-timer-mechanisms/
* https://dsa.cs.tsinghua.edu.cn/oj/static/unix_signal.html
