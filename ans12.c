#include<stdio.h>
void main()
{  int av,to,ph,ch,ma,en,hi;
   float pe;
	printf(" Input the marks :");
	scanf(" %d %d %d %d %d",&ph,&ch,&ma,&en,&hi);
	
	to=ph+ch+en+ma+hi;
	av=to/5;
	pe=to/5;
	
	printf("\n total marks =%d",to);
	printf("\n average marks =%d",av);
	printf("\n percentage of marks =%.2f%",pe);
}
