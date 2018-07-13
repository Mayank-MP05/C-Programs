#include<stdio.h>
#include<conio.h>

void main()
{
float princi,rate,time,si;
clrscr();
printf("***************** Simple Interest Calculator ******************");
printf("\n\n\n\t\tENTER THE PRINCIPAL :-\t");
scanf("%f",&princi);
printf("\n\n\t\tENTER THE RATE OF INTEREST :-\t");
scanf("%f",&rate);
printf("\n\n\t\tENTER THE TIME PERIOD OF LOAN :-\t");
scanf("%f",&time);

si=princi*rate*time/100;

printf("\n\n\n\n\t\t\tSIMPLE INTEREST = Rs %.2f",si);
getch();

}