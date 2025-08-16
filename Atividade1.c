
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C;
    printf("Digite o valor de A: \n" );
    scanf("%d", &A);
     printf("Digite o valor de B: \n" );
    scanf("%d", &B);
     printf("Digite o valor de C: \n" );
    scanf("%d", &C);
//começo da condicional
    float soma = A+B;
        if (soma < C) {
        printf("O numero e menor que C: !!!\n", soma);
            }
system("pause");
return 0;

}


