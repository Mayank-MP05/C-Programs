#include <stdio.h>
#include <conio.h>
 
void main()
{
  int a, in, out = 1;

  clrscr();

  printf("ENTER THE NUMBER TO CALCULATE ITS FACTORIAL :-\n\n\n\n");
  scanf("%d", &in);
 
  for (a = 1; a <= in; a++)
  out=out*a;

  printf("\n\nFACTORIAL OF %d IS %d\n", in,out);

  getch();
}