#include<stdio.h>
#include<conio.h>
void main()
{
int i,v;
char a[100],t;
printf("enter a string");
scanf("%s",a);
v=strlen(a);
for(i=0;i<v;i=i+2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("%s",a);

getch();
}
