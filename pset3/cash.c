#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int c = 0;

    printf("Quanto quer calcular?\n");
    float o;
    do
    {
        o = get_float("Owed: ");

    }
    while (0 > o);
    int ce = round(o * 100);
    while (25 <= ce)
    {
        ce = ce - 25;
        c++;
    }
    while (10 <= ce)
    {
        ce = ce - 10;
        c++;
    }
    while (5 <= ce)
    {
        ce = ce - 5;
        c++;
    }
    while (1 <= ce)
    {
        ce = ce - 1;
        c++;
    }

    printf("%i\n", c);
}