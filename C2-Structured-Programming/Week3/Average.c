#include <stdio.h>
#define MAX_SIZE    20
int size = 0;

void read_data(FILE*, int[], int*);
void print_data(int[]);
double calculate_avg (int []);
int main(void)
{
    FILE *fptr;
    int data[MAX_SIZE];
    fptr = fopen("hw.txt", "r");
    if (!fptr) {
        printf("File cannot be opened!\n");
        exit(0);
    }
    read_data(fptr, data, &size);
    printf("Number of hw scores are %d\n", size);
    print_data(data);
    printf("\nAvg is %S.2lf\n", calculate_avg(data));
    fclose(fptr);
    return 0;
}

void read_data (FILE *ptr, int d[], int *size) {
    *size = 0;
    while(fscanf(ptr, "%d", &d[*size]) != EOF)
        (*size)++;
}
void print_data (int d[]) {
    int i = 0;
    for (i = 0; i < size; i++) {
        printf("%d\t", d[i]);
        if ((i + 1) % 10 == 0)  printf("\n");
    }
}

double calculate_avg (int d[]) {
    int i = 0;
    double sum = 0.0;
    for (i = 0; i < size; i++) {
        sum += d[i];
    }
    return (sum / size);
}
