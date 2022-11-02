#include <stdio.h>
#include <stdlib.h>

int main()
{
    hola();
    printf("suma: %d",suma(4,6));


    return 0;
}

void hola(){
    printf("Hello world!\n");
    printf("Hello world!\n");
}

int suma(int a,int b){
    return a+b;
}
