#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - first occurence of any byte in accept within s
 * @accept: needle
 * @s: haystackR
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, res, finalCnt;
	int raid[40];
	unsigned long int arrayCnt, minCnt;

	i = j = arrayCnt = finalCnt = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				while (arrayCnt < (sizeof(raid) / sizeof(raid[0])))
				{
					raid[arrayCnt] = i;
					arrayCnt++;
				}
			}
			j++;
		}
		i++;
	}
	res = raid[0];
	for (minCnt = 0; minCnt < (sizeof(raid) / sizeof(raid[0])); minCnt++)
	{
		if (raid[minCnt] < res)
			res = raid[minCnt];
	}
	if (res >= 0)
		while (s[finalCnt] != '\0')
		{
			if (s[finalCnt] == res)
				return (&s[finalCnt]);
			finalCnt++;
		}

	return (NULL);
}
