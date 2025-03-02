#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer, or 0 if no numbers are found
 *
 * Description: This function handles an infinite number of characters
 * before the number, considers all '-' and '+' signs,
 * and returns 0 if no digits are found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (digit == 1)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
