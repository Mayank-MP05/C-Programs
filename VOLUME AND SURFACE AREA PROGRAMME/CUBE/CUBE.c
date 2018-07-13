#include <stdio.h>
#include <conio.h>

void main()

{
float side,SA,vol;

printf("\t* ENTER THE LENGTH OF SIDE OF THE CUBE :-    ");
scanf("%f",&side);

vol=side*side*side;

printf("\n\n\n\t * THE VOLUME OF THE CUBE IS :- %.2f    ",vol);

SA=6*side*side;
printf("\n\n\n\t * THE SURFACE AREA OF THE CUBE IS  :- %.3f   ",SA);

getch();
}
