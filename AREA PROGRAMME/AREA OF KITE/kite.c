#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
float d1,d2,area;
clrscr();
printf("ENTER THE LENGTH OF THE DIAGONALS :-\n");
scanf("%f\n%f",&d1,&d2);

area=0.5*d1*d2;

printf("AREA OF THE KITE IS %.2f",area);
getch();
}