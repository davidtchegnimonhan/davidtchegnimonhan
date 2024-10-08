/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** Task 01 - my_strcpy/c
*/

#include <stdio.h> 
#include <string.h>



char *my_strcpy(char *dest, char const *src)
{
  my_putchar(*dest = src);
                 
     while(src !='\0'){
           dest++;
           src++;
     }

     return (dest)
}

