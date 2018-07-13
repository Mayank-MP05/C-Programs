#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()

{
int input,output;
clrscr();

printf("\n\tENTER THE NUMBER TO GET ITS ABSOLUTE VALUE :-\n\n");
scanf("%d",&input);

output=abs(input);

printf("\n\n\tTHE ABSOLUTE VALUE OF %d IS %d",input,output);
getch();
}
