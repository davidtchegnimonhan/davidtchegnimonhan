/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** 
*/

#include <unstid>

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
