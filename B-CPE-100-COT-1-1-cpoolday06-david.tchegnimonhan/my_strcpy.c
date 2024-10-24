/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** a function that copies a string into another
*/

#include <stdio.h>
#include <string.h>

char *strcpy(char *dest, const char *src)
{
    int a = 0;

    while (src[a]) {
        dest[a] = src[a];
        a++;
    }
    return (dest);
}
