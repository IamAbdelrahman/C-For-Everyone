#include<stdio.h>
int main(void) 
{
    	int x;
    	printf("Size of int is %d", sizeof(x));
	int a = 5 , b = 7, c = 4, d = 0;
	c = ++a + b++ ;
	d = a++ + ++b;
	printf("a = %d , b = %d, c = %d, d = %d", a,b,c,d);
}


