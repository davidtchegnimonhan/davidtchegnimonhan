/*
** EPITECH PROJECT, 2024
** my_compute_factoriel_it.c
** File description:
** What they ask
*/


int my_compute_factorial_it(int nb)
{
    int valeur;
    int resultat;

    valeur = nb;
    resultat = 1;
    if (nb >= 13)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    if (nb < 0)
        return (0);
    while (valeur > 1) {
        resultat = resultat * valeur;
        index--;
    }
    return (valeur);
}
