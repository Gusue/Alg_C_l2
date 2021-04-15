/*Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int a,b;

    printf("\nInsira o primeiro valor: ");
    scanf("%d",&a);

    printf("\nInsira o segundo valor: \n");
    scanf("%d",&b);

    if (a > b)
    printf("%d",(a-b));

    else 
    printf("%d",(b-a));

    return;


}