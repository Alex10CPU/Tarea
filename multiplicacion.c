
#include <stdio.h>
int main(void){

float a,b,suma,resta,multiplicación,división;

    printf("introduce un numero");
    scanf("%f",&a);
    printf("introduce un numero");
    scanf("%f",&b);

    suma=a+b;
    resta=a-b;
    multiplicación=a*b;
    división=a/b;
    
    printf("%.2f\n",suma);
    printf("%.2f\n",resta);
    printf("%.2f\n",multiplicación);
    printf("%.2f\n",división);




    return 0;
}