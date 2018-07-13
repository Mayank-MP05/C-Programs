#include <stdio.h>
#include <conio.h>

void main()

{
int i,a;
clrscr();

printf("HOW MANY ITMES DID YOU WANT TO PRINT :-\n\n");
scanf("%d",&i);

for(a=0;a<=i;a++)
{
textcolor(a);
cprintf("\nHEY HII, I AM MAYANK \n\n");
}
getch();
}
