//C program to calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main()
{
   float ci,pr,ti,ra;
   printf("Input principal amount :");
   scanf("%f",&pr);
   printf(" \nInput time :");
   scanf(" %f",&ti);
   printf(" Input rate :");
   scanf(" %f",&ra);
    ci =(pow((1+ra/100),ti))*pr;
   printf(" compound interest =%f",ci);
   return 0;
   
}
