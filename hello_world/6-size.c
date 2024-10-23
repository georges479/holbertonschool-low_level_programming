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
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long int: %zu bytes\n", sizeof(long long int));
return (0);
}

