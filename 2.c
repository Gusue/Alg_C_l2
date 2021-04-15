/*Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor absoluto) 
elaborando os cálculos matemáticos para isso.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;

    scanf("%d",&a);
    if (a < 0)
    a = -1*a;

    printf(" O modulo eh: %d",a);

    return;



}