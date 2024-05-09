#include <stdio.h>
void main(void)
{
    FILE *ptr_in;
    FILE *ptr_out;
    char ch;
    ptr_in = fopen("file1.txt", "r");
    ptr_out = fopen("file2.txt", "w");

    while ((ch = getc(ptr_in)) != EOF)
        putc(ch, ptr_out);

    fclose(ptr_in);
    fclose(ptr_out);
}

