#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    fork();
    fork();
    printf("\nHello");

    return 0;
}
