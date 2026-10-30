/*una persona abna el 15% fr du salario semanal el 20% lo destibna a pagos de productos y servicios
el 50% en comida y el 15% en diversion*/

#include <stdio.h>
int main(void){

    float s,abono,pago,comida,diversion;

    printf("introduce el salario semanal de trabajador\n");
    scanf("%f",&s);

    abono=s*.15*4;
    pago=s*.2*4;
    comida=s*.5*4;
    diversion=s*.15*4;

    printf("el abono sera de %.2f\n",abono);
    printf("el pago sera de %.2f\n",pago);
    printf("el pago de comida sera de %.2f\n",comida);
    printf("el pago por diversion sera de %.2f\n",diversion);




    return 0;

}