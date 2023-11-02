/* Write a C program to calculate a bike’s average consumption from the
given total distance (integer value) traveled (in km) and spent fuel (in
liters, float number – 2 decimal point).*/

#include<stdio.h>
#include<math.h>
main()
{
	int d;
	float av,f;
	printf(" Input distances(km) :");
	scanf(" %d",&d);
	printf("\n Input fuel spent(l) :");
	scanf(" %f",&f);
	av=d/f;
	printf(" average comsumotion(km/l) :%f",av);
	
}
