/*
** EPITECH PROJECT, 2024
** my_put_nbr.c
** File description:
** 
*/

#include <stdio.h>

int my_put_nbr(int nb) {
    if(nb >= 0 && nb < 10) {
        my_put_nbr(nb + '0');
    }
    else if(nb < 0) {
        my_put_nbr('-');
        my_put_nbr(nb * (-1));
    }
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10); 
    }
    return(nb); 
}
