/*Write a C program to input principle, time and rate (P, T, R) from user and
find Simple Interest. How to calculate simple interest in C programming.*/
#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("Principle amount :");
	scanf(" %f",&p);
	printf(" Rate :");
	scanf(" %f",&r);
	printf(" Time :");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf(" simple interest =%.2f",si);
	
}
