#include<stdio.h>
#include<conio.h>
main()
{

int x,y,result,sum;
clrscr();
printf("enter the value of x: ");
scanf("%d",&x);
printf("enter the value of y: ");
scanf("%d",&y);
sum=x+y;
result = sum*sum;
printf("(x+y)^2 = %d",result);



getch();
}