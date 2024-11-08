#include <stdio.h>
#include <stdlib.h>



/**
*main - prints the addition of two numbers
*@argc:  number of arguments
*@argv: array of arguments
*Return: returns 0 on success, 1 if it fails
*/
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
