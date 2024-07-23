#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE    100

void calculateAverage (int[], int);
void calculateMax (int [], int);
void read_data (FILE *ptr, int d[], int *size);
int size;

int main(void)
{
    int data[SIZE], i = 0;
    FILE *ptr_in;

    if ((ptr_in = fopen("answer-hw3.txt", "r")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }

    read_data(ptr_in, data, &size);
    calculateAverage(data, size);
    calculateMax(data, size);

    fclose(ptr_in);
    return 0;
}

void read_data (FILE *ptr, int d[], int *i) {
    fscanf(ptr, "%d", &size);
    *i = 0;
    while(fscanf(ptr, "%d", &d[*i]) != EOF)
        (*i)++;
}

void calculateAverage (int a[], int a_count)
{
    int i = 0;
    double avg = 0.0, sum = 0.0;
    for (i = 0; i < a_count; i++)
        sum += a[i];
    printf("sum is %f\n", sum);
    avg = sum / a_count;
    printf("The Average is %f\n", avg);
}

void calculateMax (int b[], int b_count)
{
    int i = 0;
    char max = 'm';
    for (i = 0; i < b_count; i++) {
        if (max == 'm') {
            max = (int) max;
            max = b[i];
        }
        else if (max < b[i])
            max = b[i];
    }
    printf("The Max value is %d\n", max);
}
