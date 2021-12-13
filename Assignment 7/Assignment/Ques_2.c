// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int fd[2], retval = 0, i = 0;

    while (1) {
        retval = pipe(fd);

        if (retval == -1) {
            printf("\nMax number of pipes - %d", i);
            break;
        }

        i += 1;
    }

    printf("\nfd[0] - %d\nfd[1] - %d", fd[0], fd[1]);

    return 0;
}
