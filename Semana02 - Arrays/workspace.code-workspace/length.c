#include <cs50.h>
#include <stdio.h>

//Soletrar

int main(void)
{
    string nome = get_string("Nome: ");

    int i = 0;
    while (nome[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
}