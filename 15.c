/*Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à Internet, 
para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você pagará R$ 30,00 
por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20 horas, então você deve 
acrescentar 10% do valor básico para cada hora extra utilizada.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <stdio.h>
int main() {

    float a,b,c;

    printf("Quantidade de horas utilizando:");
    scanf("%f",&a);

    if (a<20) printf("Voce tem de pagar R$30,00");

    else 

    b = (a - 20);
    c = 30 + b*0.1*30;

    printf("voce tem de pagar R$%.2f",c);

}
