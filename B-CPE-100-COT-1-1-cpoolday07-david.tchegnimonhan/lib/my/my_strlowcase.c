/*
** EPITECH PROJECT, 2024
** my_strlowcase.c
** File description:
** 
*/

#include unstid

char *my_strlowcase(char *str);

{
    int i;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }
    }
    return str;
} 
