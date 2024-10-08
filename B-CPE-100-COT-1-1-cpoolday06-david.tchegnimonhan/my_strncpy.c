/*
** EPITECH PROJECT, 2024
** my_strncpy.c
** File description:
** Task 02 -my_strncpy.c
*/

#include <stdio.h>
#include <string.h>

char *my_strncpy(char *dest, char const *src, int n) {

    int a;
    a = 0;
      while(dest[a] != '\0' && src[a] != '\0');
    {
      if(a < n);
    {
      dest[a] = src[a];
    }
      a++;
    }
      
  return (dest);
  
}
