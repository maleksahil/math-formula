#include<stdio.h>
#include<conio.h>
main(){
int x,y,result,sum;
clrscr();
printf("Enter the value of x: ");
scanf("%d",&x);
printf("Enter the value of y: ");
scanf("%d",&y);
sum=(x+y);
result=sum*sum*sum;
printf("(x+y)^3 = %d",result);
getch();
}