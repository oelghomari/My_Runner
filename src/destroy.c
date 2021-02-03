/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "../include/my.h"

void destroy(all_t *obj)
{
    sfTexture_destroy(obj->texture_menu);
    sfTexture_destroy(obj->texture_bg);
    sfTexture_destroy(obj->texture_floor);
    sfTexture_destroy(obj->texture_flycrew);
    sfTexture_destroy(obj->texture_crewmate);
    sfTexture_destroy(obj->texture_impostor);
    sfFont_destroy(obj->font_win);
    sfFont_destroy(obj->font_lose);
    sfFont_destroy(obj->font_pause);
    sfFont_destroy(obj->font);
    sfFont_destroy(obj->font_nb);
    sfText_destroy(obj->text_win);
    sfText_destroy(obj->text_lose);
    sfText_destroy(obj->text_pause);
    sfText_destroy(obj->text);
    sfText_destroy(obj->text_nb);
    sfMusic_destroy(obj->music);
    sfRenderWindow_destroy(obj->window);
}

void destroy_sprite(all_t *obj)
{
    sfSprite_destroy(obj->sprite_menu);
    sfSprite_destroy(obj->sprite_bg);
    sfSprite_destroy(obj->sprite_floor);
    sfSprite_destroy(obj->sprite_flycrew);
    sfSprite_destroy(obj->sprite_crewmate);
    sfSprite_destroy(obj->sprite_impostor);
}
