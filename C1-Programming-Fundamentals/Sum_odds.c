#include<stdio.h>
int main(void
{
	int i = 1 , sum = 0;
  	for (i = 1; i <= 99; i++)
  	 {
        	if (i % 2 != 0)
        	{
            		sum += i;
            	}
	}
	
	printf("Sum is %d", sum);
    }
    
    
    
