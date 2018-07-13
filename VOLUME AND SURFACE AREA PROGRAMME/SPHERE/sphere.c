#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()

{
float r,tsa,vol;

printf("\t\t * ENTER THE RADIUS OF THE SPHERE :-   ");
scanf("%f",&r);

tsa=4*3.14*r*r;
vol=4.0/3*3.14*r*r*r;

printf("\n\n\n\n\t\t # THE VOLUME OF THE CONE IS %.2f",vol);
printf("\n\n\n\t\t # THE TOTAL SURFACE AREA OF THE SPHERE IS %.3f",tsa);
printf("\n\n\n\t\t # CURVED SURFACE AREA = TOTAL SURFACE AREA #");
getch();
}
