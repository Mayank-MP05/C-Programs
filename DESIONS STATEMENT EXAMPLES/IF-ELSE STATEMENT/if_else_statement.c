#include <stdio.h>
#include <conio.h>

void main()

{
int i;
clrscr();
printf("\n\n\tENTER ANY NUMBER IN BETWEEN 0 TO 100 :-\n\n\n\n\t");
scanf("%d",&i);

if(i<100)
{
printf("\n\n\n\n\tHOW OBIDIENT YOU ARE !");
}else
{
printf("\n\n\n\n\tYOU DID NOT FOLLOW MY ORDER");
}
getch();
}