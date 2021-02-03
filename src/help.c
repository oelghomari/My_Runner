/*
** EPITECH PROJECT, 2021
** help
** File description:
** help
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
        my_putchar(str[i++]);
    return (0);
}

void help(void)
{
    my_putchar('\n');
    my_putstr("This <My_Runner> project is made by Omar El Ghomari\n\n");
    my_putstr("The game is a Runner inspired of Among us.\n");
    my_putstr("The goal of the game is to dodge the seven  Impostors\n\n");
    my_putstr("Press <Enter> to start the game\n");
    my_putstr("Press <P> to Pause the game\n\n");
    my_putstr("Enjoy the game and don't get stabbed!\n");
}

int disp_help(int ac, char **av)
{
    if (ac == 1)
        return (0);
    if (av[1][0] == '-' && av[1][1] == 'h')
        help();
    else {
        my_putstr("For help type '-h'.\n");
        exit (84);
    }
    return (0);
}
