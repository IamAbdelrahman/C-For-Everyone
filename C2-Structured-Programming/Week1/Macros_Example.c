#include <stdio.h>
#define PI 3.14
#define EQ ==
#define SQ(X) ((X)*(X))

int main(void)
{   
    if (PI EQ 3.14)
        printf("This to avoid (a = b) logical error!\n");
    else ;
    printf("Square of PI is %f\n", SQ(PI));
    return 0;
}