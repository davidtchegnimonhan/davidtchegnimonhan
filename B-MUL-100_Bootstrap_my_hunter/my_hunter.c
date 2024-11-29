/*
** EPITECH PROJECT, 2024
** windows.c
** File description:
** create my own game of hunter
*/

#include <unistd.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>

void windows()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);

    if (!window)
        return;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfGreen);
        sfRenderWindow_display(window);
    }
}

int main()
{
    windows();
}
