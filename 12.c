/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence, 
considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
           
int main(){

int a;
printf("Insira o ddd: ");
scanf("%d",&a);

if (a==61||71||11||21||32||19||27||31){

if(a==61)printf("\nBrasilia");
if(a==71)printf("\nSalvador");
if(a==11)printf("\nSao Paulo");
if(a==21)printf("\nRio de Janeiro");
if(a==32)printf("\nJuiz de fora");
if(a==19)printf("\nCampinas");
if(a==27)printf("\nVitoria");
if(a==31)printf("\nBelo Horizonte");

}
else 
printf("Este ddd nao eh valido");

return 0;

}