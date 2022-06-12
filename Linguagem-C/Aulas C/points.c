#include <cs50.h>
#include <stdio.h>
int main(void)
{
    const int MINE = 2;
    int points = get_int("Quantos pontos você perdeu? ");
    if (points < MINE){
        printf("Você perdeu menos ponstos que eu.\n");
    }
    else if (points > MINE){
        printf("Nossa, você perdeu mais pontos que eu.\n");
    }
    else{
        printf("Você perdeu o mesmo tanto que eu");
    }
}