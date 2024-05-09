#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int code = 1;
    FILE *ptr_out;
    char name[31];
    float salary;

    if ((ptr_out = fopen("Data_Write.txt", "w")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }

    do
    {
    printf("Enter the code: ");
    scanf("%d", &code);
    if (code == 0) break;
    printf("Enter the name: ");
    scanf("%s", name);
    printf("Enter the salary: ");
    scanf("%f", &salary);
    fprintf(ptr_out, "%-d %-20s %-7.2f\n", code, name, salary);
    printf("\n");

    } while (1);
    fclose(ptr_out);
    return 0;
}


