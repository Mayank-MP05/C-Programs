#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()

{
float r,h,l,vol,area,csa,tsa;
clrscr();

printf("\t\t * ENTER THE RADIUS OF THE BASE OF THE CONE :-   ");
scanf("%f",&r);

printf("\n\n\t\t * ENTER THE HIEGHT OF THE CYLINDER :-    ");
scanf("%f",&h);

area=3.14*r*r;
l=sqrt(r*r+h*h);
csa=3.14*r*l;
tsa=csa+3.14*r*r;
vol=area*h/3;

printf("\n\n\n\n\t\t # THE SLANT HEIGHT OF THE CONE IS %.2f",l);
printf("\n\n\n\t\t # THE CURVED SURFACE AREA OF THE CONE IS %.3f",csa);
printf("\n\n\n\t\t # TOTAL SURFACE AREA OF THE CONE IS %.3f",tsa);
printf("\n\n\n\t\t # TOTAL VOLUME OF THE CONE IS %.3f",vol);

getch();
}
