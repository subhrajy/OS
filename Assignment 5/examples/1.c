#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    printf("\nProcess id - %d", getpid());

    return 0;
}
