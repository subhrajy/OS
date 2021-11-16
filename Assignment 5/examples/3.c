#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    printf("\nParent id - %d", getppid());

    return 0;
}
