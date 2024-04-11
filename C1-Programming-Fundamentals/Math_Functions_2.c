#include<stdio.h>
#include<math.h>
#define Pi 3.141592654

int main(void)
{
	double x = 30 , y; // x in degrees but y in radians
	printf("Angles \t Sin(x) \t Cos(x)\n");

	while (x <= 360)
	    {
		y = (x * Pi) / 180;
		printf("%lf \t %lf \t %lf\n", x, sin(y), cos(y));
		x += 30 ;
	    }
	return 0;
}
	    
