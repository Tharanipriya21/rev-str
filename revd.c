#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,q;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
q=n%10;
n=n/10;
rev=(rev*10)+q;
}
printf("%d",rev);
getch();
}
