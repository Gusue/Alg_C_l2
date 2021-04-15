/*Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome e a 
altura da menor delas.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char a1[50];
    char a2[50];
    char a3[50];
    float b1,b2,b3,bm,bmin;

    
    printf("\nDigite o primeiro nome de cada pessoa:");
    scanf("%s %s %s",&a1,&a2,&a3);

    printf("altura de %s: ",a1);
    scanf("%f",&b1);


    printf("altura de %s: ",a2);
    scanf("%f",&b2);

    printf("altura de %s: ",a3);
    scanf("%f",&b3);

    bm = fmin(b1,b2);
    bmin = fmin(bm,b3);

    if (bmin == b1) printf("%s voce eh a menor pessoa no grupo, %.2fMetros",a1,bmin);
    if (bmin == b2) printf("%s voce eh a menor pessoa no grupo, %.2fMetros",a2,bmin);
    if (bmin == b3) printf("%s voce eh a menor pessoa no grupo, %.2fMetros",a3,bmin);
}