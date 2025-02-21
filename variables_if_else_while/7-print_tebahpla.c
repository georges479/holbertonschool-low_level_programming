#include <stdio.h>
/**
 * main - print alphabet reverse in lowercase
 * 
 * Return: always 0
 */
int main(void)
{
    char z = 122;
    char a = 61;

    while (z > a)
    {
        z--;
        putchar(z);
    }
    putchar('\n');
    return (0);
}