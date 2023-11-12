// Write a program in C that takes minutes as input, and display the total number of hours and minutes.
#include<stdio.h>
int main()
{ int min,hrs;
 printf(" enter the minutes ");
 scanf("%d",&min);
 hrs=min/60;
 min=min-(hrs*60);
 printf(" %d Hours %d Minutes",hrs,min);
return 0;
}
