/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** 
*/

#include <stdio.h>
#include <unistd.h>

int my_putstr (char const *str)
{
    int a = 0;

    while( str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    my_putchar('\n');
    return 0;
}


