// Initialize array and Grade code example.
#include<stdio.h>
int main (void)
{
		int grades [5] = {51, 65, 73, 85, 100};
    	int i;
    	double sum = 0.0;
    	double *ptr = &sum; // the location of sum variable in the memory.
    	printf("Your grades are\n");

    	for (i = 0; i < 5; i++)
   	 {
        	printf("%d\t", grades[i]);
        	sum += grades[i];   // sum of all items of the array
    }
    
    	printf("\n\nYour average is %.1lf\n", sum / 5);
    	printf("%p or %lu which has a value of %g\n",ptr, ptr, *ptr); // prints the locations of sum in hexa and long unsigned
    	printf("grades are from %p to %p\n", grades, &grades[4]);
    	printf("grades are from %lu to %lu\n", grades, (grades + 4));
		
    	return 0;
    
}
