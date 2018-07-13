#include <stdio.h>
#include <conio.h>

int main()

{
clrscr ();


int a,b,c,sum;
float avg;

printf(".........................ENTER THE THREE NUMBERS TO AVERAGE.....................");
scanf("%d%d%d",&a,&b,&c);


sum=a+b+c;
avg=sum/3;
printf("\n\n\n\n\t\t\t\tTHE AVERAGE IS %2f",avg);


getch ();
}



