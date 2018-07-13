#include <stdio.h>
#include <conio.h>
#define mul(a,b)((a)*(b))

void main()
{
int x,y,re;
printf("ENTER THE NUMBER TO MULTIPLY :-\n\n");
scanf("%d%d",&x,&y);

re=mul(x,y);

printf("\n\nOUTPUT = %d",re);
getch();
}
