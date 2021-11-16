#include "stdio.h"
#include "unistd.h"

int main(int argc, char const *argv[]) {
    fork();

    printf("\nHello world");

    return 0;
}
