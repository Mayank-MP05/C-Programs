#include <stdio.h>
#include <conio.h>

void main()
{
int a,d,z;

printf("ENTER THE INTITIAL NUMBER :-\n\n");
scanf("%d",&a);

printf("\n\nENTER THE DIFFERENCE BETWEEN NUMBER :-\n\n");
scanf("%d",&d);

printf("\n\nHOW MANY TERMS DID YOU WANTS:-\n\n");
scanf("%d",&z);

printf("\n\n THE SERIES IS :-\n\n");

while(a<z)
{
printf("%d\n",a);
a+=d;
}
getch();
}
