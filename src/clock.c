/*
** EPITECH PROJECT, 2021
** clock
** File description:
** clock
*/

#include "../include/my.h"

void clock(all_t *obj)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(obj->time2)) >= 70){
        if (obj->dead == 1){
            obj->size_rect.top = 350;
            obj->size_rect.left += 150;
            if (obj->size_rect.left >= 1200)
                obj->size_rect.left = 900;
        }
        if (obj->dead == 0)
            obj->point++;
        if (obj->jump != 0 && obj->dead == 0) {
            obj->size_rect.top = 150;
            if (obj->size_rect.left >= 1200)
                obj->size_rect.left = 0;
            if (obj->pos_crewmate.y <= 450)
                obj->pos_crewmate.y = 450;
        }
    }
}

void clock_bis(all_t *obj)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(obj->time2)) >= 70){
        if (obj->jump == 0 && obj->dead == 0)
            obj->size_rect.top = 0;
        obj->size_rect.left += 150;
        obj->size_impostor.left += 200;
        if (obj->size_impostor.left == 1600 && obj->dead == 0)
            obj->size_impostor.left = 0;
        sfSprite_setTextureRect(obj->sprite_impostor, obj->size_impostor);
        if (obj->size_rect.left == 750 && obj->dead == 0)
            obj->size_rect.left = 0;
        sfSprite_setTextureRect(obj->sprite_crewmate, obj->size_rect);
        sfClock_restart(obj->time2);
    }
}
