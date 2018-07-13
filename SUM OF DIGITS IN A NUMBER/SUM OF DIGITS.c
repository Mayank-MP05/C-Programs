#include <stdio.h>
#include <conio.h>
 
void main()
{
   int n, t, sum = 0, remainder;
   clrscr();
   printf("\t\t\tENTER THE NUMBER :-\n\n\t\t\t\t");
   scanf("%d", &n);
 
   t = n;
 
   while (t>0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("\n\n\t\t\tSUM OF DIGITS OF %d = %d\n", n, sum);

   getch();
}