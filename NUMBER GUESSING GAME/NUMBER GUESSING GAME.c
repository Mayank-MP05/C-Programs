#include <stdio.h>
#include <conio.h>

void main()

{
int in,actual;
actual=67;
clrscr();
printf("\tTRY TO GUESS WHICH NUMBER ABOUT I AM THINKING ,\n\tIT IS ONLY IN BETWEEN 1 TO 100\n\n\n\n");

printf("\n\t\tENTER THE NUMBER :-\t");
scanf("%d",&in);

if(in==actual)
{
printf("\n\n\n\nCORRECT SHOT,BRO");
}else if(in<actual)
{
printf("\n\n\n\tSORRRY ,TRY AGAIN \n\n\n\t   # WRONG GUESS\nYOU ENTERED * SMAAL * THAN MY THINKING");
}else{
printf("\n\n\n\tSORRRY ,TRY AGAIN \n\n\n\t   # WRONG GUESS\nYOU ENTERED * LARGE * THAN MY THINKING");
}

getch();
}