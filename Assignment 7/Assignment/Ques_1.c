// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int fd[2];

    pipe(fd);
    printf("\nfd[0] - %d\nfd[1] - %d", fd[0], fd[1]);

    return 0;
}
