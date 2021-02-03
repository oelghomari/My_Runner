/*
** EPITECH PROJECT, 2021
** check
** File description:
** check
*/

#include "../include/my.h"

void check_crewmate(all_t *obj)
{
    if (obj->jump == 2 && obj->pos_crewmate.y <= 610)
        obj->pos_crewmate.y += 5;
    if (obj->jump == 2 && obj->pos_crewmate.y < 700
        && obj->pos_crewmate.y > 600) {
        obj->pos_crewmate.y += 6;
        if (obj->pos_crewmate.y >= 700) {
            obj->pos_crewmate.y = 700;
            obj->jump = 0;
        }
    }
    clock(obj);
    clock_bis(obj);
}

void check_impostor(all_t *obj)
{
    obj->pos_impostor.x -= 10;
    if (obj->pos_impostor.x <= -200)
        obj->pos_impostor.x = 1920;
    if (obj->dead == 0) {
        obj->pos_floor.x -= 12;
        if (obj->pos_floor.x <= -663)
            obj->pos_floor.x = 0;
    }
    obj->pos_flycrew.x -= 4;
    if (obj->pos_flycrew.x <= -7680)
        obj->pos_flycrew.x = 0;
    if (obj->jump == 1 && obj->pos_crewmate.y > 600)
        obj->pos_crewmate.y -= 6;
    if (obj->jump == 1 && obj->pos_crewmate.y > 520)
        obj->pos_crewmate.y -= 5.3;
    if (obj->jump == 1 && obj->pos_crewmate.y > 450) {
        obj->pos_crewmate.y -= 4;
        if (obj->pos_crewmate.y <= 450)
            obj->jump = 2;
    }
}

void check_event2(all_t *obj)
{
    if (obj->walk == 2) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
            obj->walk = 0;
    }
    if (obj->walk == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue) {
            display_pause(obj);
            obj->walk = 2;
        }
    }
    if (obj->event.type == sfEvtClosed ||
        sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(obj->window);
}

void check_event(all_t *obj)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue &&
        obj->pos_crewmate.y == 700 && obj->dead == 0) {
        obj->jump = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyR) == sfTrue) {
        obj->success = 0;
        obj->nb = 0;
        obj->walk = 1;
        obj->jump = 0;
        obj->dead = 0;
        obj->point = 0;
        obj->pos_crewmate.x = 270;
        obj->pos_crewmate.y = 700;
        obj->pos_impostor.x = 1920;
    }
    check_event2(obj);
}
