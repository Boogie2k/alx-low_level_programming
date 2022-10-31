#include "main.h"
#include <string.h>

/**
 * set_string - set pointer to char
 * @s: ptr to ptr
 * @to: ptr
 */

void set_string(char **s, char *to)
{
	char ch;

	ch = *to;
	**s = ch;
}
