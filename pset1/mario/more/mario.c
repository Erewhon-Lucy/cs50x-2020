#include <stdio.h>
#include <cs50.h>

void repeat(char c, int times)
{
    while (times > 0)
    {
        printf("%c", c);
        times--;
    }
}

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");

    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        repeat(' ', height - i);
        repeat('#', i);

        printf("  ");

        repeat('#', i);

        printf("\n");
    }
}