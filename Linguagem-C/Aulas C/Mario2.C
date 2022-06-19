#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pedido;
    do
    {
        pedido = get_int("Height: ");
    }
    while (pedido < 1 || pedido > 8);

    for(int coluna = 0; coluna < pedido; coluna++)
    {
        for(int linha = coluna + 1; linha < pedido; linha++)
        {
            printf(" ");
        }
        for(int pontos = pedido - coluna - 1; pontos < pedido; pontos++)
        {
            printf("#");
        }
    printf("\n");
    }

}