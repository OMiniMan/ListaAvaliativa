#include <stdio.h>
#include <stdlib.h>
int main(){
int senhaC, senhaE, i;

scanf("%d", &senhaC);

printf("senha cadastrada: %d\n", senhaC);

scanf("%d", &i);

while (i != senhaC)
{
    printf("senha invalida!\n");
    scanf("%d", &i);
}

printf("senha valida!\n");
    



}



