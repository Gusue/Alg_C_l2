/*Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de 
triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um 
outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho)
 ao lado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;

    
    printf("Coloque os valores\n");
    scanf("%d %d %d",&a,&b,&c);

//|| = or     
    if (( a < b+c ) || (b < a+c) || (c < a+b))
    {
    
     if (a == b && b == c) printf(" eh um triangulo equilatero");
    
     else
     printf((a==b ||b==c||c==a ) ? "Triangulo Isoceles":"Triangulo escaleno");
     }
     else
    printf("nao eh um triangulo");

    return 0;


}

//ainda tenho que arrumar