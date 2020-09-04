#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int cent_owe;

    do
    {
        float dollar_owe = get_float("Change owed: ");
        cent_owe = round(dollar_owe * 100);
    }
    while(cent_owe < 0);

    int quarter = cent_owe / 25;
    int dime = (cent_owe % 25) / 10;
    int nickle = ((cent_owe % 25) % 10) / 5;
    int penny = ((cent_owe % 25) % 10) % 5;

    int whole = quarter + dime + nickle + penny;

    printf("%d\n", whole);
}