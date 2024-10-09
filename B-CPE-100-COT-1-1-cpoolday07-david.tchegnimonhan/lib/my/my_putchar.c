/*
** EPITECH PROJECT, 2024
** my_putchar.c
** File description:
** 
*/

#include <unstid.h>

void my_putchar(char c)
{
  write(1, &c,  1);
}
