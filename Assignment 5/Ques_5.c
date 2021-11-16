// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int pid, i;

    pid = fork();

    if (pid == 0) {
        sleep(2);

        printf("\nchild starts.\n");

        for (i = 1; i <= 10; i++)
            printf("%d\t", i);

        printf("\nchild ends.");
    }
    else if (pid > 0) {
        printf("\nparent starts.\n");

        for (i = 1; i <= 10; i++)
            printf("%d\t", i);

        printf("\nparent ends.\n");

        sleep(2);
    }

    return 0;
}
