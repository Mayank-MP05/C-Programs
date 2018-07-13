#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()

{
char str1[50],str2[50];
clrscr();

printf("ENTER THE FULL \ SOURCE STRING :-\n\n\n");
scanf("%s",str1);

printf("\n\n\nENTER THE SEARCH STRING :-\n\n\n");
scanf("%s",str2);

if(strstr(str1,str2)==0)
{
printf("\n\n\nSORRY,GIVEN STRING CANNOT BE FOUND IN THE SURCE STRING\n");
}else{
printf("\n\n\nYES,GREAT GIVEN STRING IS FOUND");
}
getch();
}

