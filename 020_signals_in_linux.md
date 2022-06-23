### Signals in Linux

Signals are software interrupts sent to a program to indicate that an important event has occurred. The events can vary from user requests to illegal memory access errors. Some signals, such as the interrupt signal, indicate that a user has asked the program to do something that is not in the usual flow of control.


### List of Signals

There is an easy way to list down all the signals supported by your system. Just issue the kill -l command and it would display all the supported signals −

```bash
$ kill -l
 1) SIGHUP       2) SIGINT       3) SIGQUIT      4) SIGILL
 5) SIGTRAP      6) SIGABRT      7) SIGBUS       8) SIGFPE
 9) SIGKILL     10) SIGUSR1     11) SIGSEGV     12) SIGUSR2
13) SIGPIPE     14) SIGALRM     15) SIGTERM     16) SIGSTKFLT
17) SIGCHLD     18) SIGCONT     19) SIGSTOP     20) SIGTSTP
21) SIGTTIN     22) SIGTTOU     23) SIGURG      24) SIGXCPU
25) SIGXFSZ     26) SIGVTALRM   27) SIGPROF     28) SIGWINCH
29) SIGIO       30) SIGPWR      31) SIGSYS      34) SIGRTMIN
35) SIGRTMIN+1  36) SIGRTMIN+2  37) SIGRTMIN+3  38) SIGRTMIN+4
39) SIGRTMIN+5  40) SIGRTMIN+6  41) SIGRTMIN+7  42) SIGRTMIN+8
43) SIGRTMIN+9  44) SIGRTMIN+10 45) SIGRTMIN+11 46) SIGRTMIN+12
47) SIGRTMIN+13 48) SIGRTMIN+14 49) SIGRTMIN+15 50) SIGRTMAX-14
51) SIGRTMAX-13 52) SIGRTMAX-12 53) SIGRTMAX-11 54) SIGRTMAX-10
55) SIGRTMAX-9  56) SIGRTMAX-8  57) SIGRTMAX-7  58) SIGRTMAX-6
59) SIGRTMAX-5  60) SIGRTMAX-4  61) SIGRTMAX-3  62) SIGRTMAX-2
63) SIGRTMAX-1  64) SIGRTMAX
```

### Sending Signals

There are several methods of delivering signals to a program or script. One of the most common is for a user to type CONTROL-C or the INTERRUPT key while a script is executing.

When you press the Ctrl+C key, a SIGINT is sent to the script and as per defined default action script terminates.

The other common method for delivering signals is to use the kill command, the syntax of which is as follows −

```bash
$ kill -signal pid
```

Here signal is either the number or name of the signal to deliver and pid is the process ID that the signal should be sent to. For Example −

```bash
$ kill -1 1001
```

The above command sends the HUP or hang-up signal to the program that is running with process ID 1001. To send a kill signal to the same process, use the following command −

```bash
$ kill -9 1001
```

This kills the process running with process ID 1001.

### C Example to catch signals

```c
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
  if (signo == SIGINT)
    printf("received SIGINT\n");
}

int main(void)
{
  if (signal(SIGINT, sig_handler) == SIG_ERR)
  printf("\ncan't catch SIGINT\n");
  // A long long wait so that we can easily issue a signal to this process
  while(1) {
    printf("1 sec passed\n");
    sleep(1);
  }
  return 0;
}
```

```c
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
    if (signo == SIGUSR1)
        printf("received SIGUSR1\n");
    else if (signo == SIGKILL)
        printf("received SIGKILL\n");
    else if (signo == SIGSTOP)
        printf("received SIGSTOP\n");
}

int main(void)
{
    if (signal(SIGUSR1, sig_handler) == SIG_ERR)
        printf("\ncan't catch SIGUSR1\n");
    if (signal(SIGKILL, sig_handler) == SIG_ERR)
        printf("\ncan't catch SIGKILL\n");
    if (signal(SIGSTOP, sig_handler) == SIG_ERR)
        printf("\ncan't catch SIGSTOP\n");
    // A long long wait so that we can easily issue a signal to this process
    while(1) 
        sleep(1);
    return 0;
}
```

### C Example to Send signal

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char *argv[]) {
    int wstatus;

    pid_t c_pid = fork();
    if (c_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (c_pid == 0) {
        printf("printed from child process - %d\n", getpid());

        int count = 0;

        while (1) {
            count += 1;
        }

        exit(EXIT_SUCCESS);
    } else {
        printf("printed from parent process - %d\n", getpid());
        int ret;

        ret = kill(c_pid, SIGTERM);
        if (ret == -1) {
            perror("kill");
            exit(EXIT_FAILURE);
        }

        if (waitpid(c_pid, &wstatus, WUNTRACED | WCONTINUED) == -1) {
            perror("waitpid");
            exit(EXIT_FAILURE);
        }
    }

    exit(EXIT_SUCCESS);
}
```