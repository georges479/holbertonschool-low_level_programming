#include "main.h"
#include <stdio.h>


/**
 * set_string - définit la valeur du pointeur *s pour qu'il pointe vers *to
 * @s: un pointeur vers un pointeur de char
 * @to: un pointeur vers un char
 */
void set_string(char **s, char *to)
{
	*s = to;
	printf("%s\n", *s);
}
