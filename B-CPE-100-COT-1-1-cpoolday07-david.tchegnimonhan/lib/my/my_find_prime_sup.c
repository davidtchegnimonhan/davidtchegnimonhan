/*
** EPITECH PROJECT, 2024
** my_find_prime_sup.c
** File description:
** 
*/

#include <unstid>

int my_find_prime_sup(int nb);
{
    while ((my_is_prime(nb)) != 1) {
        nb = nb + 1;
    }
    return (nb);
}
