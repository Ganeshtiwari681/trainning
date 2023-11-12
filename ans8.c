//Write a C program to convert specified days into years, weeks and days.
#include<stdio.h>
int main()
{ 
int d,y,w;
printf("Enter the days");
scanf("%d",&d);
y=d/365;
d=d-y*365;
w=d/7;
d=d%7;
printf("%dyears %d weeks %d days",y,w,d);
return 0;
}
