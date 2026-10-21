
// la langosta//

#include <stdio.h>

int main(void){

    int a,personas;
    float costo,total;

            printf("ingresa la cantidad de personas");
            scanf("%d",&personas);

            if(personas<=200){
                costo=95;
            }
            else if (personas<=300){
                costo=85;
            }
            else{
                costo=75;
            }
            total= personas*costo;

            printf("costo por persona%.2f",costo);
            printf("costo total %.2f",total);

    return 0;

}