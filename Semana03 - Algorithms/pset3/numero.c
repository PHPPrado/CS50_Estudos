#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int numeros[] = {8, 2, 0, 4, 5, 6, 7};
    for(int i = 0; i < 7; i++)
    {
        if(numeros[i] == 0)
        {
             printf("Found\n");
             return 0;
        }
    }
    printf("Not found\n");
    return 1;
}