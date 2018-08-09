#include<stdio.h>
void main()
{
int m,a,c=1;
printf("enter the number");
scanf("%d",&m);
a=m/10;
while(a!=0)
{
c++;
a=a/10;
}
if(a==0)
printf("the no of digits are %d",c);
}

