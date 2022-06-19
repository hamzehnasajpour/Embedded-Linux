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
