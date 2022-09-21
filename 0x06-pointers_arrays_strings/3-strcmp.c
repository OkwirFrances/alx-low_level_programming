#include <main.h>
/**
*_strcmp - compares two strings
*@str1: first string.
*@str2: second string.
*Return: 0 if str1 and str2 are equal.
*other number otherwise.
*/

int _strcmp(char *str1, char *str2)
{
	int i = 0;
	int cmp = 0;

	while (cmp == 0)
	{
		if ((*(str1 + i) == '\0') && (*(str2 + i) == '\0'))
			break;
		cmp = *(str1 + i) - *(str2 + i);
		i++;
	}
	return (cmp);
}
