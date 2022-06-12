#include <cs50.h>
#include <stdio.h>

float discount (float price, int percentage);

int main(void)
{
    float padrao = get_float("Preço padrão: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(padrao, percent_off);
    printf("Preço de venda: %2f\n", sale);
}

float discount(float price, int percentage)
{
 return price * (100 - percentage) / 100;

}