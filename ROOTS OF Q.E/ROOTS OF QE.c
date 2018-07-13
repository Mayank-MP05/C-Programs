#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int a,b,c;
float p,q;
clrscr();
printf("\n\n\t\tENTER THE VALUES OF a ,b ,c :-\n\n\n");
scanf("%d%d%d",&a,&b,&c);

p= ((-b) + (sqrt(b*b-4*a*c)))/2*a;
q= ((-b) - (sqrt(b*b-4*a*c)))/2*a;

printf("\n\n\n\t\tTHE ROOTS OF GIVEN Q.E ARE %.2f AND %.2f",p,q);


getch();
}
