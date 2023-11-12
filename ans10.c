// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{ int min,hrs,sec;

  printf(" Input second");
  scanf("%d",&sec);
   hrs=sec/3600;
   min=(sec%3600)/60;
   sec=(sec%3600)%60;
   
   printf("%d hours %d min %d sec",hrs,min,sec);
}
