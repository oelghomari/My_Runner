/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** my_runner
*/

#include "../include/my.h"

void check_game(all_t *obj)
{
    if (obj->success == 7) {
        win(obj);
        obj->walk = 6;
    }
    if (obj->dead == 1) {
        lose(obj);
        obj->walk = 0;
    }
    if (obj->walk == 1)
        menu(obj);
    if (sfKeyboard_isKeyPressed(sfKeyEnter) == sfTrue) {
        obj->walk = 0;
        if (obj->success == 7)
            obj->walk = 6;
    }
}

void check_window(all_t *obj)
{
    while (sfRenderWindow_isOpen(obj->window)) {
        check_game(obj);
        while (sfRenderWindow_pollEvent(obj->window, &obj->event))
            check_event(obj);
        display_nb(obj);
        if ((obj->pos_impostor.x == 400 || obj->pos_impostor.x == 100)
            && (obj->pos_crewmate.y == 700 || obj->pos_crewmate.y == 650)
            && obj->dead == 0) {
            obj->dead = 1;
            obj->pos_impostor.x = -201;
        }
        if (obj->pos_impostor.x <= -190)
            obj->success++;
        if (obj->walk == 0) {
            check_impostor(obj);
            check_crewmate(obj);
        }
        render(obj);
        render_bis(obj);
    }
}

void window(all_t *obj)
{
    obj->mode.width = 1920;
    obj->mode.height = 1080;
    obj->window = sfRenderWindow_create(obj->mode, "My_Runner",
                                        sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(obj->window, 60);
}

int main(int ac, char **av)
{
    all_t *obj = malloc(sizeof(all_t));

    obj->dead = 0;
    obj->jump = 0;
    obj->walk = 1;
    obj->success = 0;
    disp_help(ac, av);
    my_background(obj);
    win(obj);
    lose(obj);
    put_score(obj);
    text_menu(obj);
    my_floor(obj);
    flycrew(obj);
    crewmate(obj);
    impostor(obj);
    window(obj);
    music(obj);
    check_window(obj);
    destroy(obj);
}
