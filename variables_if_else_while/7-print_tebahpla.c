#include <stdio.h>

/**
 * main - print alphabet reverse in lowercase
 *
 * Return: always 0
 */
int main(void)
{
    char alpha;

    for (alpha = 'z'; alpha >= 'a'; alpha--)
    {
        putchar(alpha);
    }
    putchar('\n');
    return (0);
}