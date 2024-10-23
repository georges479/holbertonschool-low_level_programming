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
printf("Size of a  char: %zu 1 byte(s)\n", sizeof(char));
printf("Size of an int: %zu 4 byte(s)\n", sizeof(int));
printf("Size of a long int: %zu 4 byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu 8 byte(s)\n", sizeof(long long));
printf("Size of a float: %zu 4 byte(s)\n", sizeof(float));
return (0);
}
