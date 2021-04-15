/*Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a;

    printf("Digite o numero: ");
    scanf("%d",&a);

    if (a%2 == 1 )

    printf("impar");

    else
    
    printf("par");

    return;
}