#include<stdio.h>
#include<conio.h>

void main()

{

float sps,lps,hieght,sum,area;
clrscr();

printf("...............................AREA OF TRAPAZIUM................................");

printf("\n\n\t\tENTER THE SHORT PARALLEL SIDE :-");
scanf("%f",&sps);

printf("\n\n\n\n\t\tENTER THE LONG PARALLEL SIDE :-");
scanf("%f",&lps);

printf("\n\n\n\n\t\tENTER THE  HIEGHT OF TRAPAZIUM :-");
scanf("%f",&hieght);

sum = sps + lps;
area=0.5*sum*hieght;

printf("\n\n\n\n\t\tTHE AREA OF TRAPAZIUM IS %.2f",area);

getch();

}