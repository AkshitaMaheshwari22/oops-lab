#include<stdio.h>
void main()
{
int a,r,i,b,c,d,e;
for(i=1000;i<=9999;i++)
{
a=sqrt(i);
r=i;
if(a*a==i)
{
b=r%10;
r=r/10;
c=r%10;
r=r/10;
d=r%10;
r=r/10;
e=r;
if(b==c && d==e && b!=d)
{
printf("%d",i);
}
}
}
}
