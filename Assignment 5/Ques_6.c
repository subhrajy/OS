// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int pid, i;

    pid = fork();

    if (pid == 0) {
        printf("child starts.\n");

        for (i = 1; i <= 10; i++)
            printf("%d\t", i);

        sleep(4);

        printf("\nchild ends.\n");
    }
    else if (pid > 0) {
        printf("parent starts.\n");

        sleep(2);

        for (i = 1; i <= 10; i++)
            printf("%d\t", i);

        printf("\nparent ends.\n");

        sleep(2);
    }

    return 0;
}
