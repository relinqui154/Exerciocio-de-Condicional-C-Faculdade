#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero,valor1,valor2;
    printf("Digite um numero qualquer: \n" );
    scanf("%d", &numero);
//começo da condicional
    if(numero % 2 == 0){
            valor1 = numero + 5;
        printf("O numero que vc digitou e PAR e a soma de 5 sera %d!!!",valor1);
    }else{
        valor2 = numero + 8;
        printf("O numero que vc digitou e IMPAR e soma sera %d!!!", valor2);
    }
system("pause");
return 0;

}


