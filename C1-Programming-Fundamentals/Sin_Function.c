#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value;
    double result;

    /* Assign the value we will find the sin of */
    value = 0.5;

    /* Calculate the Sine of value */
    result = sin(value);

    /* Display the result of the calculation */
    printf("The Sine of %f is %f\n", value, result);

    return 0;
}
