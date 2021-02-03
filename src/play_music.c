/*
** EPITECH PROJECT, 2021
** play
** File description:
** music
*/

#include "../include/my.h"

void music(all_t *obj)
{
    obj->music = sfMusic_createFromFile("music/among_song.ogg");
    sfMusic_setLoop(obj->music, sfTrue);
    sfMusic_play(obj->music);
}
