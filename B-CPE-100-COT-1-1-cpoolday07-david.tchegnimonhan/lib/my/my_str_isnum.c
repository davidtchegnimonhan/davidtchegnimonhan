/*
** EPITECH PROJECT, 2024
** my_str_isnum.c
** File description:
** 
*/

#include unstid

int my_str_isnum(char const *str);
{
     int i;

    if (len(str) <= 0)
        return 1;
    for (i = 0; str[i] != '\0'; i++){
        if (!(str[i] >= 48 && str[i] <= 57))
            return 0;
    }
    return 1;

int i;

    if (len(str) <= 0)
        return 1;
    for (i = 0; str[i] != '\0'; i++){
        if (!(str[i] >= 48 && str[i] <= 57))
            return 0;
    }
    return 1; return 1;

int i;

    if (len(str) <= 0)
	return 1;
    for (i = 0; str[i] != '\0'; i++){
	if (!(str[i] >= 48 && str[i] <= 57))
            return 0;
    }
    return 1;

}
