/*Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, então 
faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva 
o nome e o número de dias, aproximados, já vividos por essa pessoa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b,c;

    printf("\nInsira o ano de seu nascimento: ");
    scanf("%d",&a);

    printf("\nInsira o ano atual: ");
    scanf("%d",&b);

    c = (b-a)*365;

    printf("\nVoce ja viveu aproximadamente %d dias",c);
}

