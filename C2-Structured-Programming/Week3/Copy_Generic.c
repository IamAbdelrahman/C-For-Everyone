#include <stdio.h>
#include <stdlib.h>
void fileCopy (FILE*, FILE*);
int main(int argc, char *argv[]) {
    FILE *ptr_in, ptr_out;
    char ch;

    if (argc != 3) {
        printf("Usage: %s input_file output_file\n", argv[0]);
        exit(1);
    }

    if ((ptr_in = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open the input file\n");
        exit(2);
    }

    if ((ptr_out = fopen(argv[2], "w")) == NULL) {
        printf("Cannot open the output file\n");
        fclose(ptr_in);
        exit(3);
    }

    fileCopy(ptr_in, ptr_out);
    fclose(ptr_in);
    fclose(ptr_out);

    return 0;
}

void fileCopy(FILE *iptr, FILE *optr)
{
    char ch;
    while ((ch = getchar(iptr)) != EOF)
    {
        putc(ch, optr);
    }
}
