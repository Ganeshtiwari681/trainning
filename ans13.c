// C program to find area of an equilateral triangle
#include<stdio.h>
 main()
{ int s;
  float ar;
	printf("Input a side ");
	scanf(" %d",&s);
	
	ar= sqrt(3)/4*(s*s);
	printf("\n area of triangle =%f",ar);

}
