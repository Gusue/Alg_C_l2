/*Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma 
figura geométrica onde cada lado é menor do que a soma dos outros dois lados).*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;

    printf("Coloque os valores\n");
    scanf("%d %d %d",&a,&b,&c);

    if (( a < b+c ) && (b < a+c) && (c <a+b))

    printf("pode ser um triangulo");

    else 

    printf("Nao eh um triangulo");

    return; 
}