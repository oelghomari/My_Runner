/*
** EPITECH PROJECT, 2021
** background
** File description:
** background
*/

#include "../include/my.h"

void my_background(all_t *obj)
{
    obj->texture_bg = sfTexture_createFromFile("backgr/star_backgr.jpg",
                                                NULL);
    obj->sprite_bg = sfSprite_create();
    sfSprite_setTexture(obj->sprite_bg, obj->texture_bg, sfTrue);
}

void menu(all_t *obj)
{
    obj->texture_menu = sfTexture_createFromFile("backgr/menu.jpg", NULL);
    obj->sprite_menu = sfSprite_create();
    sfSprite_setTexture(obj->sprite_menu, obj->texture_menu, sfTrue);
}

void flycrew(all_t *obj)
{
    obj->texture_flycrew = sfTexture_createFromFile("backgr/ejected_crew.png",
                                                   NULL);
    obj->sprite_flycrew = sfSprite_create();
    sfSprite_setTexture(obj->sprite_flycrew, obj->texture_flycrew, sfTrue);
    obj->pos_flycrew.x = 0;
    obj->pos_flycrew.y = 0;
    obj->size_flycrew.width = 15360;
    obj->size_flycrew.height = 800;
    sfSprite_setTextureRect(obj->sprite_flycrew, obj->size_flycrew);
}

void my_floor(all_t *obj)
{
    obj->texture_floor = sfTexture_createFromFile("backgr/brick_floor.jpg",
                                                   NULL);
    obj->sprite_floor = sfSprite_create();
    sfSprite_setTexture(obj->sprite_floor, obj->texture_floor, sfTrue);
    obj->pos_floor.x = 0;
    obj->pos_floor.y = 843;
    obj->size_floor.width = 3978;
    obj->size_floor.height = 219;
    sfSprite_setTextureRect(obj->sprite_floor, obj->size_floor);
}
