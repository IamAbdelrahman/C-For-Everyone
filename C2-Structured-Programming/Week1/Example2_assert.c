#include <stdio.h>
#include <assert.h>

int main(void)
{   
    double x, y;
    while (1)
    {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &x, &y);
        assert(y != 0);
        printf("When divided x/y = %lf\n", x / y);
    }
    
    return 0;
}