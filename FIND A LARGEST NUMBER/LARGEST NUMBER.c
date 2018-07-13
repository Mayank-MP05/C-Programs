#include <stdio.h>
#include <conio.h>

int main()

{

clrscr ();

int a,b,c,d,e;
printf("............................ENTER ANY THREE NUMBERS.............................");
scanf("%d%d%d",&a,&b,&c);
d=(a>b?a:b);
e=(d>c?d:c);
printf("\n\n\n\t\t\t...... THE LARGEST NUMBER IS %d ......",e);

getch ();


}
