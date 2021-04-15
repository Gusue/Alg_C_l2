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

    d = fmax(a,b);
    e = fmax(d,c);
//Fmax eh uma funcao do math.h que puxa o maior valor entre dois valores 

    printf("\n O maior valor dentre esses tres numeros eh: %d",e);
}