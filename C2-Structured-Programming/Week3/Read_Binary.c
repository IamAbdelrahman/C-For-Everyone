#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int code = 1;
    FILE *ptr_in;
    char name[31];
    float salary;

    if ((ptr_in = fopen("Data_bin.txt", "rb")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }

    while (!feof(ptr_in))
    {
        if((fread(&code, sizeof(code), 1, ptr_in)) == 0 ) break;
        fread(&salary, sizeof(salary), 1, ptr_in);
        fread(name, sizeof(name), 1, ptr_in);
        printf("%5d\t%30s\t%7.2f\n", code, name, salary);

    }
    fclose(ptr_in);
    return 0;
}




