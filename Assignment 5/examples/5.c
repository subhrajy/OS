#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    printf("\nBefore fork");
    fork();
    printf("\nAfter fork");

    return 0;
}
