#include <stdio.h>
#include <conio.h>

void main()

{
float l,b,p;
clrscr();

printf("\nENTER THE LENGTH OF RECTANGLE OR A PARALLELOGRAM :-  ");
scanf("%f",&l);

printf("\n\n\nENTER THE BREADTH OF RECTANGLE OR A PARALLELOGRAM :-  ");
scanf("%f",&b);

p=2*l+2*b;

printf("\n\n\nPERIMETER OF THE GIVEN RECTANGLE IS %.2f",p);

getch();
}
