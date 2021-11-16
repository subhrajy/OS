// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int pid, number;

    printf("\nEnter a number - ");
    scanf("%d", &number);

    pid = fork();

    if (pid == 0) {
        int i;
        for (i = 1; i < number / 2; i++) {
            if (number % i == 0) {
                printf("\nNot prime.");
                break;
            }
        }
    }

    else if (pid > 0) {
        sleep(3);
        if (number % 2 == 0) {
            printf("\nEven");
        }
        
        else{
            printf("\nOdd");
        }
    }

    return 0;
}
