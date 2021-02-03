/*
** EPITECH PROJECT, 2021
** render
** File description:
** render
*/

#include "../include/my.h"

void render(all_t *obj)
{
    sfRenderWindow_display(obj->window);
    sfRenderWindow_clear(obj->window, sfBlack);
    sfRenderWindow_drawSprite(obj->window, obj->sprite_bg, NULL);
    sfSprite_setTexture(obj->sprite_bg, obj->texture_bg, sfTrue);
    sfSprite_setPosition(obj->sprite_flycrew, obj->pos_flycrew);
    sfRenderWindow_drawSprite(obj->window, obj->sprite_flycrew, NULL);
    sfSprite_setPosition(obj->sprite_impostor, obj->pos_impostor);
    sfRenderWindow_drawSprite(obj->window, obj->sprite_impostor, NULL);
    sfSprite_setPosition(obj->sprite_crewmate, obj->pos_crewmate);
    sfRenderWindow_drawSprite(obj->window, obj->sprite_crewmate, NULL);
    sfSprite_setPosition(obj->sprite_floor, obj->pos_floor);
    sfRenderWindow_drawSprite(obj->window, obj->sprite_floor, NULL);
}

void render_bis(all_t *obj)
{
    if (obj->walk == 2) {
        sfRenderWindow_drawSprite(obj->window, obj->sprite_menu, NULL);
        sfSprite_setTexture(obj->sprite_menu, obj->texture_menu, sfTrue);
        sfRenderWindow_drawText(obj->window, obj->text_pause, NULL);
    }
    if (obj->walk == 0) {
        sfRenderWindow_drawText(obj->window, obj->text, NULL);
        sfRenderWindow_drawText(obj->window, obj->text_nb, NULL);
    }
    if (obj->success == 7 && obj->dead == 0) {
        sfRenderWindow_drawText(obj->window, obj->text_win, NULL);
        obj->walk = 2;
    }
    if (obj->dead == 1)
        sfRenderWindow_drawText(obj->window, obj->text_lose, NULL);
    if (obj->walk == 1) {
        sfRenderWindow_drawSprite(obj->window, obj->sprite_menu, NULL);
        sfSprite_setTexture(obj->sprite_menu, obj->texture_menu, sfTrue);
        sfRenderWindow_drawText(obj->window, obj->text_menu, NULL);
    }
}
