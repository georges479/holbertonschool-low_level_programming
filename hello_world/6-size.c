#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * C Program to Find the Size of int,
 *
 * float, double, and char using sizeof operator directly
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
