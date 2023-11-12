/*Write a C program that accepts two item’s weight (floating points' values ) and number of
purchase (floating points' values) and calculate the average value of the items.*/
#include<stdio.h>
int main()
{
   float w1,n1,w2,n2;
   float av;
   printf("item's weight1 :");
   scanf(" %f",&w1);
   printf("\nno. of purchase :");
   scanf(" %f",&n1);
   printf("\nitem's weight2 :");
   scanf(" %f",&w2);
   printf("\nno. f purchase :");
   scanf(" %f",&n2);
   
   av= ((w1*n1)+(w2*n2))/(n1+n2);
   printf("\n average of item's=%f",av);

   return 0;
}

