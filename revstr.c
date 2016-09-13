#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j=0,len,k=0;
char s[20],b[20];
clrscr();
gets(s);
while(s[i]!='\0')
i++;
len=i-1;
for(j=len;j>=0;j--)
{
b[k]=s[j];
k++;
}
printf("%s",b);
getch();
}
