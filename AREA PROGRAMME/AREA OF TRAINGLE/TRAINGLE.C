#include<stdio.h>
#include<conio.h>

void main()

{

float hieght,base,area;


clrscr();
printf("\t\t\tENTER THE BASE OF TRAINGLE :-");
scanf("%f",&base);

printf("\n\n\n\n\t\t\tENTER THE HIEGHT OR ALTITUDE OF TRAINGLE :-");
scanf("%f",&hieght);

area = 0.5*base*hieght;

printf("\n\n\n\n\n\n\t\t\tAREA OF THE TRAINGLE IS %.2f",area);
getch();
}
