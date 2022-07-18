#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string nome;
    int votos;
} candidatos;

candidatos elegiveis[9];
int n;

bool vote(string voto);
void print_winner(void);

int main(int argc, string argv[])
{
    if(argc < 2)
    {
        printf("Insira uma quantidade de conditatos maior.\n");
    }

    n = argc - 1;
    if (n > 9)
    {
        printf("O numero maximo de candidatos foi atingido.\n");
    }
    for(int p = 0; p < n; p++)
    {
        elegiveis[p].nome = argv[p + 1];
        elegiveis[p].votos = 0;
    }

    int eleitores = get_int("Quantos vao votar? ");

    for(int v = 0; v < eleitores; v++)
    {
        string voto = get_string("Voto: ");
        if(!vote(voto))
        {
            printf("Voto invalido.\n");
        }
    }

    print_winner();

}

//Functions

bool vote(string voto)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(voto, elegiveis[i].nome) == 0)
        {
            elegiveis[i].votos++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int max = 0;
    for(int z = 0; z < n; z++)
    {
        if (elegiveis[z].votos > max)
        {
            max = elegiveis[z].votos;
        }
    }
    return;
}