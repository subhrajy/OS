// Subhra

#include "stdio.h"
#include "stdlib.h"
#include "sys/wait.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int i, j, pid, arr[10], fd1[2], fd2[2], point[10], flag = -1, idx, freq[10];


    printf("\nEnter 10 numbers - \n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    pid = fork();

    if (pid > 0){
        for (i = 0; i < 10; i++) {
            wait(NULL);

            //read(fd1[0], &freq[i], sizeof(int));
        }

        printf("\nfreq is \n");
        for (i = 0; i < 10; i++) {
            printf("%d\t", freq[i]);
        }
    }


    if (pid == 0) {
        for (i = 0; i < 10; i++) {
            int count = 1;
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count += 1;
                    point[j] = flag;
                }
            }

            if (point[i] != flag) {
                point[i] = count;
            }
        }

        //write(fd1[1], point, sizeof(point));

        // printf("\nfreq is \n");
        // for (i = 0; i < 10; i++) {
        //     printf("%d\t", point[i]);
        // }

        for (i = 0; i < 10; i++) {
            write(fd1[1], &point[i], sizeof(int));

            if (point[i] != flag) {
                //write(fd1[1], i, sizeof(int));
                //write(fd2[1], point[i], sizeof(int));

                //printf("\n%d - %d", arr[i], point[i]);
            }
        }
    }

    return 0;
}
