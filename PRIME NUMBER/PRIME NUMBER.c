#include <stdio.h>
#include <conio.h>

void main()

{
int input,div,a;
clrscr();
printf("\n\t# ENTER THE NUMBER TO CHECK IT IS PRIME OR NOT :-\n\n\n\t* ");
scanf("%d",&input);

for(div =2;div<input;div++)
{
a=input%div;
break;
}
if(a==0)
{
printf("\n\n\n\t* IT IS NOT A PRIME NUMBER\n");
}else{
printf("\n\n\n\t* IT IS A PRIME NUMBER\n");
}
getch();
}