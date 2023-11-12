//C program to convert temperature from Fahrenheit to Celsius.
#include<stdio.h>
#include<math.h>
void main()
{
	float f,c;
	printf(" enter the temperture (fahrenheit) :");
	scanf(" %f",&f);

	c =(f-32)*5/9;
	printf("celsius :%f",c);

}
