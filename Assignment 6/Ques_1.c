// Subhra

#include "stdio.h"


void waiting_time(int process[], int number, int tat[], int at[], int wt[]){
    int i;

    for (i = 1; i <= number; i++) {
        wt[i] = tat[i - 1] - at[i - 1];
    }
}


void turnaround_time(int process[], int number, int ct[], int at[], int tat[]){
    int i;

    for (i = 0; i < number; i++) {
        printf("\nCT IS - %d\n", ct[i]);
        printf("\nAT IS - %d\n", at[i]);
        tat[i] = ct[i] - at[i];

        printf("\nTAT IS - %d", tat[i]);
    }
}


void completion_time(int process[], int number, int bt[], int ct[]){
    int i, sum = 0;

    for (i = 0; i < number; i++) {
        sum += bt[i];
        ct[i] += sum;
    }
}


int main(int argc, char const *argv[]) {
    int process[10] = {}, at[10] = {}, tat[10] = {}, ct[10] = {}, wt[10] = {}, bt[10] = {};
    int number, i, total_wt = 0, total_tat = 0;

    printf("\nEnter number of processes - ");
    scanf("\n%d", &number);

    for (i = 0; i < number; i++) {
        printf("\nEnter arrival time and burst time for process %d respectively. \n", i);
        scanf("%d%d", &at[i], &bt[i]);
    }

    completion_time(process, number, bt, ct);
    for (i = 0; i < number; i++) {
        //printf("\n%d\n", ct[i]);
    }
    turnaround_time(process, number, ct, at, tat);
    waiting_time(process, number, tat, at, wt);

    for (i = 0; i < number; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
    }

    printf("\nAverage waiting time - %f", (float)total_wt / (float)number);
    printf("\nAverage turnaround time - %f", (float)total_tat / (float)number);

    return 0;
}
