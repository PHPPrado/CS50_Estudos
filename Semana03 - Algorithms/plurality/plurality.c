#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX 9

typedef struct
{
    string name;
    int votes;
} candidate;

candidate candidates[MAX];
int candidate_count;

bool vote(string voto);
void print_winner(void);

int main(int argc, string argv[])
{
    if(argc < 2)
    {
        printf("Insira uma quantidade de conditatos maior.\n");
        return 1;
    }

    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("O numero maximo de candidatos foi atingido.\n");
        return 2;
    }
    for(int p = 0; p < candidate_count; p++)
    {
        candidates[p].name = argv[p + 1];
        candidates[p].votes = 0;
    }

    int eleitores = get_int("Quantos vao votar? ");

    for(int v = 0; v < eleitores; v++)
    {
        string name = get_string("Voto: ");
        if(!vote(name))
        {
            printf("Voto invalido.\n");
        }
    }

    print_winner();

}

//Functions

bool vote(string name)
{
    for(int i = 0; i < candidate_count; i++)
    {
        if(strcmp(name, candidates[i].name) == 0)
        {
           candidates[i].votes++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int max = 0;
    for(int z = 0; z < candidate_count; z++)
    {
        if (candidates[z].votes > max)
        {
            max = candidates[z].votes;
        }
    }

    for (int v = 0; v < candidate_count; v++)
    {
        if(candidates[v].votes == max)
        {
            printf("%s\n", candidates[v].name);
        }
    }
    return;
}
