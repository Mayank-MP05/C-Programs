#include <stdio.h>
#include <conio.h>
#include <math.h>  
  
void main()
{  
    float amount, rate, time, CI;
    clrscr();
    printf("******************  compound interest calculator  **********************");
    printf("\n\n\t\tEnter principle (amount) of loan: ");
    scanf("%f", &amount);  
    printf("\n\n\t\tEnter time of loaning: ");
    scanf("%f", &time);  
    printf("\n\n\t\tEnter rate of interest: ");
    scanf("%f", &rate);  


    CI = amount * (pow((1 + rate / 100), time)-1);  
  
    printf("\n\n\n\n\t\t\tCompound Interest = %.2f", CI);
  
    getch();
}

