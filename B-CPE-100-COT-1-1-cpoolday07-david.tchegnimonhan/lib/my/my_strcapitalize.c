/*
** EPITECH PROJECT, 2024
** my_strcapitalize.c
** File description:
** 
*/

char *my_strcapitalize(char *str) {
    int i;

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;  
    }

    
    for (i = 1; str[i] != '\0'; i++) {
        verification(str, i);  
    }
    return str;
}
