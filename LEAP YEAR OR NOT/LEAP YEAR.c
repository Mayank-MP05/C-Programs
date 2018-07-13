#include <stdio.h>
#include <conio.h>
 
void main()
{
  int year;
  clrscr();
  printf("ENTER THE YEAR TO CHECK WHEATHER IT IS OR NOT A LEAP YEAR\n\n\t\t\t\n");
  scanf("%d", &year);
 
  if ( year%400 == 0)
    printf("\n\n%d IS A LEAP YEAR.\n", year);
  else if ( year%100 == 0)
    printf("\n\n%d IS NOT A LEAP YEAR.\n", year);
  else if ( year%4 == 0 )
    printf("\n\n%d IS A LEAP YEAR.\n", year);
  else
    printf("\n\n%d IS NOT A LEAP YEAR.\n", year);

  getch();
}
