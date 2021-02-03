/*
** EPITECH PROJECT, 2021
** score
** File description:
** score
*/

#include "../include/my.h"

void put_score(all_t *obj)
{
    obj->str = "SCORE";
    obj->font = sfFont_createFromFile("font/In your face, joffrey!.ttf");
    obj->text = sfText_create();
    sfText_setCharacterSize(obj->text, 40);
    sfText_setString(obj->text, obj->str);
    sfText_setFont(obj->text, obj->font);
    obj->pos_text.x = 1750;
    obj->pos_text.y = 30;
    sfText_setPosition(obj->text, obj->pos_text);
    obj->point = 0;
}

void display_nb(all_t *obj)
{
    obj->s = int_to_char(obj->point);
    obj->font_nb = sfFont_createFromFile("font/In your face, joffrey!.ttf");
    obj->text_nb = sfText_create();
    sfText_setCharacterSize(obj->text_nb, 50);
    sfText_setColor(obj->text_nb, sfWhite);
    sfText_setString(obj->text_nb, obj->s);
    sfText_setFont(obj->text_nb, obj->font_nb);
    obj->pos_nb.x = 1800;
    obj->pos_nb.y = 90;
    sfText_setPosition(obj->text_nb, obj->pos_nb);
}
