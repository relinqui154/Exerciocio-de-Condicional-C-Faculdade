
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero,dobro,triplo;
    printf("Digite um numero positivo ou negativo: \n" );
    scanf("%d", &numero);
    if(numero>=0){
    dobro = numero*2 ;
        printf("O dobro do numero: %d!!!\n", dobro);
        }else{
        triplo = numero*3;
             printf("O triplo do numero: %d!!!\n", triplo);
            }
system("pause");
return 0;

}



