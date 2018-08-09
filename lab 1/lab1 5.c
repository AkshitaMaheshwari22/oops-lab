#include<stdio.h>
void main()
{
int i;
char a[50];
printf("enter a string");
gets(a);
for(i=0;a[i]!='\0';i++);
printf("%d",i);






}
