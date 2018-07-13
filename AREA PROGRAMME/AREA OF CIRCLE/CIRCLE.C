#include<stdio.h>
#include<conio.h>

void main()

{
float pi,radius,AREA;
pi=3.1428;

clrscr ();
printf("\t\t\tENTER THE RADIUS OF CIRCLE :-\t");
scanf("%f",&radius);

AREA=pi*radius*radius;

printf("\n\n\n\n\n\t\t\tAREA OF REQURED CIRCLE IS %.2f",AREA);
getch ();
}
