// Subhra

#include "stdio.h"
#include "unistd.h"


int main(int argc, char const *argv[]) {
    int pid, i, m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10], matrix_sum[10][10];

    printf("Enter the number of rows and columns of first matrix - \n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of first matrix - \n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the number of rows and columns of second matrix - \n");
    scanf("%d%d", &p, &q);

    printf("Enter the elements of second matrix - \n");
    for (c = 0; c < p; c++)
        for (d = 0; d < q; d++)
            scanf("%d", &second[c][d]);

    pid = fork();

    if (pid == 0) {
        for ( c = 0 ; c < m ; c++ )
            for ( d = 0 ; d < n ; d++ )
                matrix_sum[c][d] = first[c][d] + second[c][d];

        printf("\nSum of entered matrices:-\n");

        for (c = 0; c < m; c++){
            for (d = 0; d < n; d++)
                printf("%d\t", matrix_sum[c][d]);

            printf("\n");
        }
    }

    else if (pid > 0) {
        if (n != p)
            printf("Number of columns of first matrix should match the number of rows of the second matrix.\n");

        else{
            for (c = 0; c < m; c++){
                for (d = 0; d < q; d++){
                    for (k = 0; k < p; k++){
                        sum = sum + first[c][k]*second[k][d];
                    }
                    multiply[c][d] = sum;
                    sum = 0;
                }
            }

            printf("\nProduct of entered matrices:-\n");

            for (c = 0; c < m; c++){
                for (d = 0; d < q; d++){
                    printf("%d\t", multiply[c][d]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
