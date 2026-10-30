//costo del viaje de una empresa de atobuses//

#include <stdio.h>

int main(void){

int personas,bus,pp,pf;
float total,km;

 

    printf("[1] autobus A ($2.0*km)\n");
    printf("[2] autobus B ($2.5)\n");
    printf("[3] autobus C ($3.0)\n");
    printf("introduce la clase de autobus que desea viajar ");
    scanf("%i",&bus);



     printf("introduce e numero de personas\n");
     scanf("%d",&personas);
     printf("introduce el kilometraje recorrido\n ");
     scanf("%f",&km);

    switch(bus){
       
        case 1:
        if (personas<20){
            total=2*km;
            pf=total*20;
            pp=pf/personas;
        }
        else{
        total=2*km;
        pf=total;
        pp=total*personas;
        }

        case 3;

        
         
       
        defaul:

        printf("no esta el autobus ");



    }

    printf("el costo es de %.2f",pp);

return 0;  
}
