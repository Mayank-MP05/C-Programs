#include <stdio.h>
#include <conio.h>

void main()

{

int t1,t2,t3,c,i,j;
t1=0;
t2=1;
c=2;
clrscr();

printf("HOW MANY TERMS DO YOU WANT :-\t");
scanf("%d",&i);

j=i+2;

printf("\n\n\nTHE SERIES IS :-\n\n\n");
while(c<j)
{
c=c+1;
t3=t1+t2;

printf("\t%d\n\n",t3);

t1=t2;
t2=t3;

}
getch();

}
