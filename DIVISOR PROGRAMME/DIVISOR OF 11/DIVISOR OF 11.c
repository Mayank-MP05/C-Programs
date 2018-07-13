#include <stdio.h>
#include <conio.h>

void main ()
{


   int a,b;
   clrscr();

   printf("\n\n\n\t\t ENTER THE NUMBERS :-\t\a");
   scanf("%d",&a);

   b = a % 11;

    if(b == 0)
     {
      printf("\n\n\n\n\t\tTHE ENTERED NUMBER IS A DIVISOR OF 11 \n" );
     }
   else
   {
      printf("\n\n\n\n\t\tTHE ENTERED NUMBER IS NOT A DIVISOR OF 11 \n" );
   }

   getch();

}



