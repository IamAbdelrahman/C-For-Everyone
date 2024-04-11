#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define getchar() getc(stdin)
#define putchar(c) putc(c, stdout)

int main(void)
{   
    char ch = getchar();
    putchar(ch);
    putchar('\n');
    return 0;
}