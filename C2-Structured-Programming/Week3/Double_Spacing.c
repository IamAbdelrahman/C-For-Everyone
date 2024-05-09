#include <stdio.h>
#include <stdlib.h>

void double_spacing (FILE*, FILE*);
void print_file (FILE*);

int main(int argc, char *argv[])
{
    FILE *ptr_in, *ptr_out;
    char ch;

    if (argc != 3)
    {
        printf("Usage: %s input_file output_file\n", argv[0]);
        exit(1);
    }

    if ((ptr_in = fopen(argv[1], "r+")) == NULL)
    {
        printf("Cannot open the input file\n");
        exit(2);
    }

    if ((ptr_out = fopen(argv[2], "w+")) == NULL)
    {
        printf("Cannot open the output file\n");
        fclose(ptr_in);
        exit(3);
    }
    printf("File %s is read as\n", argv[1]);
    print_file(ptr_in);
    printf("\n\n");
    double_spacing(ptr_in, ptr_out);
    printf("File %s is double-spaced as\n", argv[2]);
    print_file(ptr_out);
    printf("\n\n");
    fclose(ptr_in);
    fclose(ptr_out);

    return 0;
}

void double_spacing(FILE *iptr, FILE *optr)
{
    char ch;
    rewind(iptr);
    while ((ch = getc(iptr)) != EOF)
    {
        putc(ch, optr);
        if (ch == '\n')
            putc('\n', optr);
    }
}

void print_file (FILE* fptr)
{
    char ch;
    rewind(fptr);
    while ((ch = getc(fptr)) != EOF)
    {
        putc(ch, stdout);
    }
}
