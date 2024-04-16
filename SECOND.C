#include<stdio.h>
#include<conio.h>
main()
{
int a = 10;
int b = 20;
clrscr();
a = a+b; //10+20=30
b = a-b; //30-20=10
a = a-b; //30-10=20
printf("%d\n%d",a,b);
getch();
}