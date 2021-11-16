#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    int i;

    printf("\nProcess is - %d", getpid());
    for (i = 0; i <= 10; i++) {
        sleep(10);
    }

    return 0;
}
