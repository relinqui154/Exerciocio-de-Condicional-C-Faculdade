#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    printf("Digite um numero qualquer: \n" );
    scanf("%d", &numero);
//começo da condicional
    if(numero % 2 == 0){
        printf("O numero que vc digitou e PAR!!!\n");
    }else{
        printf("O numero que vc digitou e IMPAR!!!\n");
    }
system("pause");
return 0;

}

