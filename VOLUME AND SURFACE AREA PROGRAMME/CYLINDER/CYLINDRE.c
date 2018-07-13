#include <stdio.h>
#include <conio.h>

void main()

{
float radius,height,csa,fsa,vol,peri,area;
clrscr();

printf("ENTER THE RADIUS OF THE BASE OF THE CYLINDER :-   ");
scanf("%f",&radius);

printf("\n\tENTER THE HIEGHT OF THE CYLINDER :-     ");
scanf("%f",&height);

area=3.1428*radius*radius;
peri=3.1428*2*radius;

csa=peri*height;
fsa=peri*height*2*area;
vol=area*height;

printf("\n\n\n\n\t  * THE CURVED SURFACE AREA OF THE CYLINDER IS %f",csa);
printf("\n\n\n\t  * TOTAL SURFACE AREA OF THE CYLINDER IS %f",fsa);

printf("\n\n\n\t  * VOLUME OF THE GIVEN CYLINDER IS %f",vol);


getch();
}
