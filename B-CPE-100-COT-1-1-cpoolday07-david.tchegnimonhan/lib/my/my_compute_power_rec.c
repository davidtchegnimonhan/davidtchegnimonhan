/*
** EPITECH PROJECT, 2024
** my_compute_power_rec.c
** File description:
** 
*/
#include unstid

int my_compute_power_rec(int nb, int power);

{
	if (power > 0)
		nb *= my_compute_power_rec(nb, power - 1);
	else
		return (1);
	return (nb);
}
