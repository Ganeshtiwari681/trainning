//Write a C program that converts kilometers per hour to miles per hour. (1KM = 0.621371 M)
#include<stdio.h>
 main()
{ float km,mile=0.621371;
 printf(" enter kilometer per hour :");
 scanf("%f",&km);
 mile =mile*km;
 printf("Mile =%f",mile);
}
