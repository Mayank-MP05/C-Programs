#include<stdio.h>
#include<conio.h>

void main()
{

int a,b,c,d;
int x1,x2,x3,x4;

clrscr();

printf("TYPE ANY FOUR NUMBERS:-\n");
scanf("%d%d%d%d",&a,&b,&c,&d);

x1=a*a;
x2=b*b;
x3=c*c;
x4=d*d;

printf("THE SQUARE OF GIVEN NUMBERS IS :-\n %d \n %d\n %d \n %d",x1,x2,x3,x4);


getch();

}