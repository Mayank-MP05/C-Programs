#include<stdio.h>
#include<conio.h>

void main()

{
float l,b,area;
clrscr();
printf("\t\t\tENTER THE LENGTH OF THE RECTANGLE :-");
scanf("%f",&l);

printf("\n\n\n\n\t\t\tENTER THE WIDTH OF THE RECTANGLE :-");
scanf("%f",&b);

area=l*b;

printf("\n\n\n\n\n\n\t\t\tAREA OF THE RECTANGLE IS %0.2f",area);
getch();
}