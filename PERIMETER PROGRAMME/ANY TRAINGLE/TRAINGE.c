#include <stdio.h>
#include <conio.h>

void main()

{
float s1,s2,s3,peri;

printf("ENTER THE LENGTH OF 1st SIDE :-    ");
scanf("%f",&s1);

printf("\n\n\nENTER THE LENGTH OF 2nd SIDE :-    ");
scanf("%f",&s2);

printf("\n\n\nENTER THE LENGTH OF 3rd SIDE :-    ");
scanf("%f",&s3);

peri=s1+s2+s3;

printf("\n\n\nTHE AREA OF REQUIRED TRAINGLE IS %.2f",peri);

getch();
}