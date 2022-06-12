#include <cs50.h>
#include <stdio.h>
int main(void){
    int numero =  get_int("Número: ");
    //Par ou Impar
    if (numero % 2 ==0){
        printf("Par\n");
    }
    else{
        printf("Ímpar\n");
    }
}