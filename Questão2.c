#include <stdio.h>
#include <math.h>
int main(){
int n1, numero, soma = 0, digito;

scanf("%d", &n1);
numero = n1;

    while (n1 > 0)
    {
        digito = n1 % 10;
        soma = soma + digito;
        n1 = n1 / 10;
    }
    

if (numero % 2 == 0)
{
    printf("%d eh par\n", numero);
}
else{
    printf("%d eh impar\n", numero);
} 


printf("A soma dos algarismos de %d eh %d\n", numero, soma);
}