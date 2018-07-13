#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
char str1[15],str2[15];
clrscr();
strcpy(str1,"MAY");
strcpy(str2,"ANK");

printf("\n\n str1=MAY \n\n str2=ANK\n\n");
printf("\n\nAFTER STRCAT() FUNCTION THE KEYWORD FORMED IS \" %s \"",strcat(str1,str2));
getch();
}
