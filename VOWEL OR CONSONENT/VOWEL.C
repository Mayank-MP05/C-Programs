#include <stdio.h>
#include <conio.h>
 
void main()
{
  char I;
  clrscr();
  printf("\tENTER THE CHARACTER :-\n\n\t");
  scanf("%c", &I);
 
  if (I == 'a' || I == 'A' || I == 'e' || I == 'E' || I == 'i' || I == 'I' || I =='o' || I=='O' || I == 'u' || I == 'U')
    printf("\n\n\t%c IS A VOWEL.\n", I);
  else
    printf("\n\n\t%c IS NOT A VOWEL \n\t IT IS A CONSONENT .\n", I);
    getch();
}
