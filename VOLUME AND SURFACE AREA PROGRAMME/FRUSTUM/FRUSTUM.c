#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()

{
float r1,r2,h,l,d,csa,tsa,vol,a1,a2;
clrscr();

printf("\t * ENTER THE LENGTH OF THE RADII OF SMALLER BASE :-   ");
scanf("%f",&r1);

printf("\n\t * ENTER THE LENGTH OF THE RADII OF THE LARGER BASE :-   ");
scanf("%f",&r2);

printf("\n\t * ENTER THE HIEGHT OF THE FRUSTUM :-   ");
scanf("%f",&h);

d=r2-r1;
l=sqrt(d*d+h*h);
a1=3.14*r1*r1;
a2=3.14*r2*r2;
csa=3.14*(r1+r2)*l;
tsa=csa+a1+a2;
vol=3.14*(r1*r1+r1*r2+r2*r2)*h/3;

printf("\n\n\n\t\t # SLANT HIEGHT OF THE FRUSTUM IS %.2f",l);
printf("\n\n\n\t\t # AREA OF SMALLER BASE IS %.2f",a1);
printf("\n\n\n\t\t # AREA OF LARGER BASE IS %.2f",a2);
printf("\n\n\n\t\t # CURVED SURFACE AREA OF THE FRUSTUM IS %.2f",csa);
printf("\n\n\n\t\t # TOTAL SURFACE AREA OF THE FRUSTUM IS %.2f",tsa);
printf("\n\n\n\t\t # VOLUME OF THE FRUSTUM IS %.2f",vol);

getch();
}
