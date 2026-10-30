#include <stdio.h>
int main(void){

char l;
float kg,b,c,co,cg;

printf("tamaños [1] Normal, [2] Grande\n");
printf("tipo[a]A,[b]B\n");
scanf("%f %c",&b,&l);

printf("introduce el precio del kilo de uva\n");
scanf("%f",&kg);
printf("introduce la cantidad de kilos vendidos\n ");
scanf("%f",&c);

if (b==1 && c=='a'){
    cg=kg+.4;
    co=(kg*c)+cg;
    printf("costo total %.2f\n ",co);

}else if (b==1 && c=='b'){
    cg=kg+.30;
    co=(kg*c)+cg;
}else if (b==2 && c=='a'){
    cg=kg+.30;
    co=(kg*c)+cg;
    printf("costo total %.2f\n",co);
}
else {
    cg=kg*.50;
    co=(kg*c)+cg;
    printf("costo total %.2f\n",co);
}


    return 0;
}