// Subhra

#include "stdio.h"
#include "unistd.h"
#define MSGSIZE 15

int main(int argc, char const *argv[]) {
    int i = 0, fd[2];
    char *m1 = "Hello ";
    char *m2 = "World!!";
    char inbuf[MSGSIZE];

    pipe(fd);

    write(fd[1], m1, MSGSIZE);
    write(fd[1], m2, MSGSIZE);

    for (i = 0; i < 2; i++) {
        read(fd[0], inbuf, MSGSIZE);
        printf("%s", inbuf);
    }

    return 0;
}
