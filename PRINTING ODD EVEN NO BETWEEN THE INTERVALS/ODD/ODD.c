#include <stdio.h>
#include <conio.h>

void main()
{
int a,b,z;

printf("ENTER THE INTITIAL NUMBER :-\n\n");
scanf("%d",&a);

printf("\n\nENTER THE FINAL NUMBER :-\n\n");
scanf("%d",&z);

if(a%2==0)
{
b=a+1;
while(b<z)
{
printf("\t %d \n\n",b);
b+=2;
}
}
else
{

while(a<z)
{
printf("\t %d \n\n",a);
a+=2;

}
}
getch();
}
