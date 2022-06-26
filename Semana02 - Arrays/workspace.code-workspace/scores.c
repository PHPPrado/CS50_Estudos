#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int scores[3];
    scores[0] = get_int("Nota NP1: ");
    scores[1] = get_int("Nota NP2: ");
    int media = ((scores[0] + scores[1]) / 2.0);

    printf("Media: %f\n", (scores[0] + scores[1]) / 2.0);

    if (media > 7 || media == 7)
    {
        printf("Parabéns você foi aprovado(a) nesta diciplina.\n");
    }
    else
    {
        scores[2] = get_int("Você precisa fazer o exame...\nQual a nota do seu Exame? ");
        printf("Sua Media final foi de: %f\n", (media + scores[2]) / 2.0);

        if( (media + scores[2]) / 2.0 > 5 || (media + scores[2]) / 2.0 == 5)
        {
            printf("Parabéns, você conseguiu.\n");
        }
        else
        {
             printf("Lamento, vai para a DP.\n");
        }
    }
}