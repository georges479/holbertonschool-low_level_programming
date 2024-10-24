#include<stdio.h>


/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
char c;


for (c = 'a'; c <= 'z'; c++)
{
switch (c)
{
case 'e':
case 'q':
continue;
}
putchar(c);
}
putchar('\n');
return (0);
}
