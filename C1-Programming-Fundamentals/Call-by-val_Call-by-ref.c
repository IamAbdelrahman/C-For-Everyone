#include<stdio.h>
void swap_ref (int *i, int *j);
void swap (int, int);
int main(void)

{
   	int i = 3 , j = 5;
    printf("Before Swapping i = %d and j= %d\n", i, j);
  	swap(i, j)  ;
    printf("After Swapping (by value) i = %d and j= %d\n", i, j);
  	swap_ref (&i, &j);
    printf("After Swapping (by reference) i = %d and j= %d\n", i, j);
  	return 0;
}

void swap (int i, int j)    // call by value
{
    // Algorithm of swapping
    int temp = i;
    i = j;
    j = temp;
}

void swap_ref (int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
    
}

