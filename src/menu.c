/*
** EPITECH PROJECT, 2021
** menu
** File description:
** menu
*/

#include "../include/my.h"

void text_menu(all_t *obj)
{
    obj->str_menu = "Appuyez sur<Entrer>pour commencer";
    obj->font_menu = sfFont_createFromFile("font/In your face, joffrey!.ttf");
    obj->text_menu = sfText_create();
    sfText_setCharacterSize(obj->text_menu, 120);
    sfText_setString(obj->text_menu, obj->str_menu);
    sfText_setFont(obj->text_menu, obj->font_menu);
    obj->pos_menu.x = 380;
    obj->pos_menu.y = 50;
    sfText_setPosition(obj->text_menu, obj->pos_menu);
}

void display_pause(all_t *obj)
{
    obj->str_pause = "<Enter> = play     <R> = restart\n        <Q> = quit";
    obj->font_pause = sfFont_createFromFile("font/In your face, joffrey!.ttf");
    obj->text_pause = sfText_create();
    sfText_setCharacterSize(obj->text_pause, 100);
    sfText_setString(obj->text_pause, obj->str_pause);
    sfText_setFont(obj->text_pause, obj->font_pause);
    obj->pos_pause.x = 430;
    obj->pos_pause.y = 30;
    sfText_setPosition(obj->text_pause, obj->pos_pause);
}
