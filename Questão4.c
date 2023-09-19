#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){



char exp;
double sal, porc, novoSal;

scanf("%c", &exp);
scanf("%lf", &sal);

if(exp == 'a')
{
    porc = sal * 5 / 100;
    novoSal = sal + porc;
    printf("R$%.2lf\n", novoSal);
}else if(exp == 'b')
{
    porc = sal * 7 / 100;
    novoSal = sal + porc;
    printf("R$%.2lf\n", novoSal);
} else if(exp == 'c')
{
    porc = sal * 8 / 100;
    novoSal = sal + porc;
    printf("R$%.2lf\n", novoSal);
}



    




}
