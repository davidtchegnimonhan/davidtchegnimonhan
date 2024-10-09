/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** 
*/

#include <unstid>

int my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
  return (1);
}
