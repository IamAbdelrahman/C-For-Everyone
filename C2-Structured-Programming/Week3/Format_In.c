#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct person {
    int code;
    char name[31];
    float salary;
    int id[5];
}Person;

int main(void)
{
    Person P;
    FILE *ptr_in;
    int code;
    char name[31];
    float salary;

    if ((ptr_in = fopen("data.txt", "r")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }
    printf("Count is %d\n", Sizeof_file());

    while (fscanf(ptr_in, "%d", &P.code) != EOF)
    {
        fscanf(ptr_in, "%d", &P.code);
        fscanf(ptr_in, "%s", P.name);
        fscanf(ptr_in, "%f", &P.salary);
        int i = 0;
        for (i = 0; i < 5; i++)
        {
            fscanf(ptr_in, "%d", &P.id[i]);
        }
        printf("Code number %d is saved successfully\n", P.code);

    }
    fclose(ptr_in);
    return 0;
}
