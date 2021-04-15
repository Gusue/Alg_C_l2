/*Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o menor 
deles, mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a,b,c,d,e;

    printf("\nInsira o primeiro valor: ");
    scanf("%d",&a);

    printf("\nInsira o segundo valor: ");
    scanf("%d",&b);

    printf("\nInsira o terceiro valor: ");
    scanf("%d",&c);

    d = fmin(a,b);
    e = fmin(d,c);
//Fmin eh uma funcao do math.h que puxa o menor valor entre dois valores 

    printf("\n O menor valor dentre esses tres numeros eh: %d",e);
}