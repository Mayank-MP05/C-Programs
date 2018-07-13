#include<stdio.h>
#include<conio.h>

void main()
{
 int day_no;
 clrscr();
 printf("\n\n\tEnter a day between 1 to 7\n\n\t");
 scanf("%d",&day_no);
 switch(day_no)
 {
 case 1:
 printf("\n\n\n\t its Sunday");
 break;

 case 2:
 printf("\n\n\n\t its monday");
 break;

 case 3:
 printf("\n\n\n\t its Tuesday");
 break;

 case 4:
 printf("\n\n\n\t its Wednesday");
 break;

 case 5:
 printf("\n\n\n\tits thursday");
 break;

 case 6:
 printf("\n\n\n\t its Friday");
 break;

 case 7:
 printf("\n\n\n\t its Saturday");
 break;

 default:
 printf("\n\n\n\tEnter a day between 1 to 7");
 break;
 }
 getch();
 }
