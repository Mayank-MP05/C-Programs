#include <stdio.h>
#include <conio.h>

void main()

{
int cp,sp,profit,loss;
clrscr();
printf("\n\t\tENTER THE COST PRICE OF THE PRODUCT :-\t");
scanf("%d",&cp);

printf("\n\n\n\t\tENTER THE SELLING PRICE OF THE PRODUCT :-  ");
scanf("%d",&sp);

if(cp>sp)
{
	loss=cp-sp;
   printf("\n\n\n\n\t\tSELLER HAS SUFFERED FROM LOSS OF Rs %d",loss);
}else if(cp==sp)
{
	printf("\n\n\n\n\t\tNO TRANSACTION HAS OCCURED.");
}else
{
	profit=sp-cp;
	printf("\n\n\n\n\t\tTHE SELLER HAS GAINED THE PROFIT Of Rs %d",profit);
}
getch();
}