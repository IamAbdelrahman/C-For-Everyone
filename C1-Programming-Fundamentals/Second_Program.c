#include<stdio.h>
int main(void)
{
	char    c = 'a' ;
	char plus = '+' , a = 'a' , one = '1' ;
	printf("ASCII for characters %d %d %d",'\n','\a','\b');
  	printf("\nASCII for characters A and a is %d-%d",'A','a');
   	printf("\nCharacters %c %d %d",c,c + 1,c + 2);
   	printf("\nASCII for + is %d",plus);
	printf("\nASCII for 1 is %d",one);
    	printf("\nASCII for a + 1 is %d\n",'a+1'); //?
    	printf("Result of 2.0 / 5 is %f %e %g\n", 2.0/5 ,2.0/5,2.0/5);
    	printf("Result of 2.0 / 5 is %f %E %G", 2.0/5 ,2.0/5,2.0/5);
    	return 0;
    }
    
    
