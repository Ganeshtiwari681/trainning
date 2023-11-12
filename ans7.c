//  Write a C program to find the third angle of a triangle if two angles are given.
#include<stdio.h>
int main()
{ int a,b,c;
 printf("Input two angles of triangle separated by comma :");
 scanf("%d %d",&a,&b);
 c=180-(a+b);
 printf(" third angle =%d",c);
 
}
