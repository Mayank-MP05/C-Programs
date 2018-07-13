#include <stdio.h>
#include <conio.h>

void main ()
{


   int a,b;
   clrscr();

   printf("\n\n\n\t\t ENTER THE NUMBERS :-\a");
   scanf("%d",&a);

   b = a % 3;

    if(b == 0)
     {
      printf("\n\n\n\n\t\tTHE ENTERED NUMBER IS A DIVISOR OF 3 \n" );
     }
   else
   {
      printf("\n\n\n\n\t\tTHE ENTERED NUMBER IS NOT A DIVISOR OF 3\n" );
   }

   getch();

}



