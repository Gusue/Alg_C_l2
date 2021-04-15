/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao motorista 
somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite de 80 km/h).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
//void nao retorna nada    

    int a;
    scanf("%d",&a);

    if (a >80)
    printf("\nVoce foi multado, esta a %d km/h em uma vida de 80km/h\n",a);

    else 

    printf("\nObrigado por dirigir em segurança e oa viagem!");

    return;
    
    }