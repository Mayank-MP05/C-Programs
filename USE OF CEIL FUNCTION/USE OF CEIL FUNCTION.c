#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main()
{
  double ip, op;

  printf("\n\tENTER THE NUMBER TO BE ROUND IT UP :-\n\n\n\t");
  scanf("%lf", &ip);
 
  op = ceil(ip);

  printf("\n\n\tACTUAL NUMBER IS =  %.2lf\n", ip);
  printf("\n\n\tROUND UP NUMBER IS = %.2lf\n", op);
 
 getch();
}
