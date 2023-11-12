//write a C program to print the folowing  character in a reverse way
#include"stdio.h"
#include<string.h>
int main()
{ char name[100];

  gets(name);
  printf("test character %s",name);
  printf("rev character%s :%s",name,strrev(name));

 return 0;

}
