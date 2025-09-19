#include<stdio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter the Two Numbers :");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swaped values are :%d %d",a, b);
getch();
}