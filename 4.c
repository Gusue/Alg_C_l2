/*Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída uma das 
seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo feminino, 
acrescentando o nome em seguida*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    char a[50];
    int c;

    
    printf("\nQual o seu nome?");
    fgets(a,50,stdin);

    printf("\nQual seu sexo? \nDigite 1 para Masculino \nOu 2 para feminino ");
    scanf("%d",&c);

    if (c == 1)

    printf("\n llmo. Sr %s",a);

    else

    printf("\n llma Sra. %s",a);
}