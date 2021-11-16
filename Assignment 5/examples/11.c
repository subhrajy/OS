#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    if (fork() > 0) {
        printf("\nparent");
        sleep(50);
    }
    else{
        printf("\nChild process id - %d", getpid());
    }

    return 0;
}
