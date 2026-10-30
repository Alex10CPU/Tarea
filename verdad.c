#include <stdio.h>
int main(void){

int a,b=0;

a=1;
a+=3;
b+=a+3;

printf("%d",a!=b+1);  
printf("%d",a-a<b);   
printf("%d",a==b+2);  
printf("%d",a>=b);    





    return 0;

}