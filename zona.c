#include <stdio.h>
int main(void){

int a;

printf("introduce el numero\n");
scanf("%d",&a);

if(a<20){
    printf("pertenece a zona 1\n");
}
else if(a>21 && a<40){
                    printf("pertenece a zona 2\n");
}
else{
    printf("pertenece a zona 3\n ");
}


    return 0;
}