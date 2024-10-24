#include<stdio.h>


/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
char c;
char l;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (l = 'A' ; l <= 'Z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
