#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    FILE *ptr_in;
    char line[31];
    
    if ((ptr_in = fopen("string.txt", "r")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }
    while (fgets(line, 81, ptr_in) != NULL)
    {
        printf("%s", line);

    }
    fclose(ptr_in);
    return 0;
}


