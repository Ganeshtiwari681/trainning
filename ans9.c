//WAP to read an amount (integer value ) and break the break the amount into smallest posssible number of bank notes.
#include<stdio.h>
 int main()
 { int am,hn,ft,tw,tn,fn,to,on;
   printf(" enter the amount :");
   scanf(" %d",&am);
   hn=am/100;
   ft=(am%100)/50;
   tw=((am%100)%50)/20;
   tn=(((am%100)%50)%20)/10;
   fn=((((am%100)%50)%20)%10)/5;
   to=(((((am%100)%50)%20)%10)%5)/2;
   on=((((((am%100)%50)%50)%10)%5)%2)/1;
   printf("\n %d Notes(s) of 100\n %d Notes(s) of 50\n %d Notes(s) of 20\n %d Notes(s) of 10 ",hn,ft,tw,tn);
   printf("\n %d Notes(s) of 5 \n %d Notes(s) of 2\n %d Notes(s) of 1",fn,to,on);
   return 0;
 }
