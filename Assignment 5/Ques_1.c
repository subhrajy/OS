// SUbhra

#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>

int main(int argc, char const *argv[]) {
    int pid = fork();

    if (pid == 0) {
        printf("\nChild process id - %d", getpid());
        printf("\nParent process id - %d", getppid());
        printf("\n");
    }

    return 0;
}
