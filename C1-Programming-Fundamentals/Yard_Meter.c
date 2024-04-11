#include<stdio.h>
int main(void)
{
    float miles, meters = 0;
    printf("Please enter your miles in yards: ");
    scanf("%f",&miles);
    meters = miles / 1.094;
    printf("\nYour miles in meters are %fm\n", meters);
    
    return 0;
}


