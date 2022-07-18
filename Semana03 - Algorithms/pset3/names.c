#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
string names[] = {"Pedro", "Ana", "Marcos", "Camila", "José", "R.Ceni", "Neymar"};
string pedido = get_string("Digite um nome: ");

for(int i = 0; i < 7; i++)
    {
        if(strcmp(names[i], pedido) == 0)
        {
             printf("Found\n");
             return 0;
        }
    }
    printf("Not found\n");
    return 1;
}