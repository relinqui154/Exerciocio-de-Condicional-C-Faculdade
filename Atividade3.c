
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C;
    printf("Digite o valor de A: \n" );
    scanf("%d", &A);
     printf("Digite o valor de B: \n" );
    scanf("%d", &B);

//começo da condicional
        if (A == B) {
                C = A+B;
        printf("O valor de C sera %d \n", C);
            } else {
                C = A * B;
                printf("O valor de C sera %d \n",C);
            }

return 0;

}

