#include <cs50.h>
#include <stdio.h>
int main(void){
    //Calculadora
    long x = get_long("x: ");
    long y = get_long("y: ");
    long z = x + y;
    //Resposta
    printf("A resposta é %li\n", z);
}