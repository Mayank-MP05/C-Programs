#include <stdio.h>
#include <conio.h>

void main()

{
int sign;
int num1,num2,result;
clrscr();
printf("\n\t 1) ADDITION ");
printf("\n\t 2) SUBSTRACTION ");
printf("\n\t 3) MULTIPLICATION");
printf("\n\t 4) DIVISION ");

printf("\n\n\n\tENTER THE CODE OF OPERATION :-\t");
scanf("%d",&sign);

printf("\n\n\n\tENTER THE NUMBER FIRST  :-");
scanf("%d",&num1);

printf("\n\n\n\tENTER THE NUMBER SECOND  :-");
scanf("%d",&num2);
switch(sign)
{

case 1 :result=num1+num2;
        printf("\n\n\n\t\tnADDITION = %d",result);
        break;

case 2 :result=num1-num2;
        printf("\n\n\n\n\t\tSUBSTRACTION = %d",result);
        break;

case 3 :result=num1*num2;
        printf("\n\n\n\n\t\tMULTIPLICATION = %d",result);
        break;

case 4 :result=num1/num2;
        printf("\n\n\n\n\t\tDIVISION = %d",result);
        break;

default:printf("INFORMATTED OUTPUT");
}

getch();
}

