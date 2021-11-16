#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    int pid = fork();

    if (pid == 0) {
        printf("\nChild process is - %d", getpid());
        printf("\nParent process is - %d", getppid());

        sleep(5);

        printf("\nChild process is - %d", getpid());
        printf("\nParent process is - %d", getppid());
    }
    else{
        printf("\nParent process is - %d", getpid());
        printf("\nParent's parent process is - %d", getppid());
    }

    return 0;
}
