#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x;
      	int xy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = xy = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[xy] != '\0')
		xy++;
	concat = malloc(sizeof(char) * (x + xy + 1));

	if (concat == NULL)
		return (NULL);
	x = xy = 0;
	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}

	while (s2[xy] != '\0')
	{
		concat[x] = s2[xy];
		x++, xy++;
	}
	concat[x] = '\0';
	return (concat);
}
