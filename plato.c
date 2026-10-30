#include <stdio.h>
int main(void){

    int p;
    float costo;
    printf("introduce el numero de personas\n");
    scanf("%d",&p);

    if(p<=200){
            printf("el costo por platillo sera de $95\n");
            costo=p*95;
            printf("el costo sera de %.2f",costo);
    }
    else if (p>200 && p<300){

        printf("el costo por platollo sera de 85");
        costo=p*85;
        printf("el costo sera de %.2f",costo);
    }
    else{
        printf("el costo por platillo sera de $75\n");
        costo=p*75;
        printf("el costo sera de %.2f",costo);
    }



    return 0;

    }
