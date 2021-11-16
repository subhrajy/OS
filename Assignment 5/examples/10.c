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
        sleep(5);

        printf("\nParent process is - %d", getpid());
        printf("\nParent's parent process is - %d", getppid());
        printf("\nparent terminates.", );
    }

    return 0;
}
