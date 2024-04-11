#include <stdio.h>
typedef enum variable {
    X, 
    Y
}Variable_t;

int main(void)
{   
    if (X == 0)
        printf("Strong type checking!\n");
    else
        printf("Weak type checking!\n");
    
    int y = 1;
    if (y = 1)
        printf("Weak type checking!\n");
    else
        printf("Strong type checking!\n");
    
    /* Error Lvalue required if we write the following:
    if (Y = 1)
    */
    return 0;
}