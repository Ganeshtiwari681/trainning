/*Write a C program that accepts an employee's ID, total worked hours of a
month and the amount he received per hour. Print the employee's ID and salary
(with two decimal places) of a particular month.*/
#include<stdio.h>
int main()
{ 
 int em_id,hrs;
 float sal,salary;
 printf("input employee's Id(MAX 10 chars) =");
 scanf("%d",&em_id);
 printf("input working hours =");
 scanf("%d",&hrs);
 printf("input your salary amount/hrs =");
 scanf("%f",&sal);
  printf("\n\n");
 salary=sal*hrs;
 printf("%d\n",em_id);
 printf("salary=%.2f",salary);
 return 0;
 
 
}
