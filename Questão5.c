#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int a, b, maior, menor;
    
    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        maior = a;
        menor = b;
        printf("%d eh maior que %d\n", a, b);
            if (maior % menor == 0)
            {
                printf("%d eh multiplo de %d\n", maior, menor);
            } else{
                printf("%d nao eh multiplo de %d\n", maior, menor);
            }
            
            
    } else if(b > a){
        maior = b;
        menor = a;
        printf("%d eh maior que %d\n", b, a);
            if (maior % menor == 0)
            {
                printf("%d eh multiplo de %d\n", maior, menor);
            } else{
                printf("%d nao eh multiplo de %d\n", maior, menor);
            }
    } else {
        maior = a;
        menor = a;
        printf("Os valores lidos sao iguais\n");
    }








}