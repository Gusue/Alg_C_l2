/*Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o peso 
ideal da pessoa, utilizando as seguintes fórmulas
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char a[50];
    int c;
    float b;

    
    printf("\nQual o seu nome?");
    fgets(a,50,stdin);

    printf("\nQual seu sexo? \nDigite 1 para Masculino Ou 2 para feminino ");
    scanf("%d",&c);

    printf("Qual a sua altura?");
    scanf("%f",&b);


    if (c == 1)

    printf("\n llmo. Sr %s seu peso ideal eh de %.2f\n",a,((b*72.5)-58));

    else

    printf("\n llma Sra. %s seu peso ideal eh de %.2f\n",a,((b*62.1)-44.7));
}