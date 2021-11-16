// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int pid, i;

    pid = fork();

    if (pid == 0) {
        printf("\nChild starts.\n");

        for (i = 1; i <= 10; i++)
            printf("%d\t", i);

        printf("\nchild ends.");
    }
    else if (pid > 0) {
        sleep(2);
        printf("\nparent ends.");
    }

    return 0;
}
