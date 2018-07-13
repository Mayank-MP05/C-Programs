#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()

{
char code[15],input[50];
clrscr();
strcpy(code,"MAYANK");
printf("\n\n\t\t* ENTER THE PASSWORD :-\n\n\t\t* ");
scanf("%s",&input);

if(strcmp(code,input)==0)
{
printf("\n\n\n\t\t:-) CORRECT PASSWORD ,MAYU HIIIII\n\n\n");
}else{
printf("\n\n\n\t\t:-( INCORRECT PASSWORD ,SORRY TRY AGAIN\n\n\n");
}
getch();
}
