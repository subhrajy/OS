#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    int pid = fork();

    if (pid == 0) {
        printf("\nChild process");
    }
    else{
        printf("\nParent process");
    }

    return 0;
}
