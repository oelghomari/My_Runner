/*
** EPITECH PROJECT, 2021
** event
** File description:
** event
*/

#include "../include/my.h"

void win(all_t *obj)
{
    obj->str_win = "Crewmate Win !";
    obj->font_win = sfFont_createFromFile("font/VCR_OSD_MONO_1.001.ttf");
    obj->text_win = sfText_create();
    sfText_setCharacterSize(obj->text_win, 120);
    sfText_setString(obj->text_win, obj->str_win);
    sfText_setColor(obj->text_win, sfCyan);
    sfText_setFont(obj->text_win, obj->font_win);
    obj->pos_win.x = 520;
    obj->pos_win.y = 200;
    sfText_setPosition(obj->text_win, obj->pos_win);
}

void lose(all_t *obj)
{
    obj->str_loose = "Imposter Win..";
    obj->font_lose = sfFont_createFromFile("font/VCR_OSD_MONO_1.001.ttf");
    obj->text_lose = sfText_create();
    sfText_setCharacterSize(obj->text_lose, 120);
    sfText_setString(obj->text_lose, obj->str_loose);
    sfText_setColor(obj->text_lose, sfRed);
    sfText_setFont(obj->text_lose, obj->font_lose);
    obj->pos_lose.x = 520;
    obj->pos_lose.y = 200;
    sfText_setPosition(obj->text_lose, obj->pos_lose);
}
