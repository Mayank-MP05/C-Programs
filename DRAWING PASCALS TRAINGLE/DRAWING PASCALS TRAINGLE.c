#include <stdio.h>
#include <conio.h>
void main()
{
int p[10][10];
int i,j,k;
clrscr();
printf("\nPascal's Triangle\n");
for(i=0;i<10;i++)
{
j=1;
p[i][0]=1;
p[i][i]=1;
while(j<i)
{
p[i][j]=p[i-1][j-1]+p[i-1][j];
j++;
}
}
for(i=0;i<10;i++)
{
j=10;
while(j>i)
{
printf("  ");
j--;
}
for(k=0;k<=i;k++)
{
printf("%4d",p[i][k]);

}
printf("\n\n");
}
getch();
}
