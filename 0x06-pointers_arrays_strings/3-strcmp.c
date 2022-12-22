#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
{
	int i, j;

	j = 0;

	for (i = 0; s1[i] != "\0" && s2[i] != "\0"; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}
