#include <stdio.h>
#include <conio.h>

void main()

{
int pass;
clrscr();
printf("\t\t( NOTE:programme will terminated if password is wrong )");

printf("\n\n\n\n\n\t\t\tENTER THE PASSWORD :-\t");
scanf("%d",&pass);


if(pass==12345)
{
	printf("\n\n\n\n\t\tHELLO MAYU , YOU HAVE SUCESSFULLY LOGGED IN.");
}
getch();
}