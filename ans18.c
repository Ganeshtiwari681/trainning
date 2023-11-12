//Write a C program to Swap two Numbers Without Using temporary variable.
#include<stdio.h>
void main()
{
	int a,b;
	printf(" input first number :");
	scanf(" %d",&a);
	printf(" input second number :");
	scanf(" %d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf( "\n swapped numbers are :%d   %d",a,b);
	
}

