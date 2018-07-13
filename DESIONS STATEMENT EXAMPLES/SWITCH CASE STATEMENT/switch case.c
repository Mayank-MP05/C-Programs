#include <stdio.h>
#include <conio.h>

void main()

{
char i;
clrscr();
printf("\n\n\tENTER YOUR SEX INTIALS:-\n\n\n\n\t");
scanf("%c",&i);

switch(i)
{
case 'm':
case 'M':printf("\n\n\n\n\tSO YOU ARE A MALE");
          break ;

case 'F':
case 'f':printf("\n\n\n\n\tSO YOU ARE A FEMALE");
          break ;

default:printf(" SORRY ,INVLID INPUT");
}
getch();
}