/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** 
*/

#include <stdio.h>
#include <string.h>

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
