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

    if ((ptr_out = fopen("Data_bin.txt", "wb")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }

    do
    {
    printf("Enter the code: ");
    scanf("%d", &code);
    fflush(stdin);
    if (code == 0) break;
    printf("Enter the name: ");
    scanf("%s", name);
    printf("Enter the salary: ");
    scanf("%f", &salary);
    fwrite(&code, sizeof(code), 1, ptr_out);
    fwrite(&salary, sizeof(salary), 1, ptr_out);
    fwrite(name, sizeof(name), 1, ptr_out);
    printf("\n");
    } while (1);

    fclose(ptr_out);
    return 0;
}



