#include <stdio.h>
#include <conio.h>
void main()
{
int num;
clrscr();
printf("\n\t\tENTER THE NUMBER :- \t");
scanf("%d",&num);

switch(num)

{
case 1:printf("\n\n\n\t\tYOU JUST ENTERED ONE");
	      break;

case 2:printf("\n\n\n\t\tYOU JUST ENTERED TWO");
	      break;

case 3:printf("\n\n\n\t\tYOU JUST ENTERED THREE");
	      break;

case 4:printf("\n\n\n\t\tYOU JUST ENTERED FOUR");
	      break;

case 5:printf("\n\n\n\t\tYOU JUST ENTERED FIVE");
	      break;

case 6:printf("\n\n\n\t\tYOU JUST ENTERED SIX");
	      break;

case 7:printf("\n\n\n\t\tYOU JUST ENTERED SEVEN");
	      break;

case 8:printf("\n\n\n\t\tYOU JUST ENTERED EIGHT");
	      break;

case 9:printf("\n\n\n\t\tYOU JUST ENTERED NINE");
	      break;

case 0:printf("\n\n\n\t\tYOU JUST ENTERED ZERO");
	      break;

default:printf("\n\n\n\t\tHEY YOU MAD, YOU DID NOT ENTERED ANY NUMBER.");
}
getch();
}