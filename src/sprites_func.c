/*
** EPITECH PROJECT, 2021
** sprites_func
** File description:
** sprites_func
*/

#include "../include/my.h"

void impostor(all_t *obj)
{
    obj->texture_impostor = sfTexture_createFromFile("sprites/imposteur.png",
                                                   NULL);
    obj->sprite_impostor = sfSprite_create();
    sfSprite_setTexture(obj->sprite_impostor, obj->texture_impostor, sfTrue);
    obj->pos_impostor.x = 1000;
    obj->pos_impostor.y = 763;
    obj->size_impostor.width = 200;
    obj->size_impostor.height = 84;
    sfSprite_setTextureRect(obj->sprite_impostor, obj->size_impostor);
}

void crewmate(all_t *obj)
{
    obj->texture_crewmate = sfTexture_createFromFile("sprites/crew_sprite.png",
                                                      NULL);
    obj->sprite_crewmate = sfSprite_create();
    sfSprite_setTexture(obj->sprite_crewmate, obj->texture_crewmate, sfTrue);
    obj->pos_crewmate.x = 270;
    obj->pos_crewmate.y = 700;
    obj->size_rect.width = 150;
    obj->size_rect.height = 150;
    sfSprite_setTextureRect(obj->sprite_crewmate, obj->size_rect);
    obj->time2 = sfClock_create();
}
