/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Text.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct all
{
    int success;
    int nb;
    int walk;
    int jump;
    int dead;
    int point;
    char *s;
    char *str;
    char *str_pause;
    char *str_menu;
    char *str_win;
    char *str_loose;

    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *texture_menu;
    sfTexture *texture_bg;
    sfSprite *sprite_menu;
    sfSprite *sprite_bg;
    sfTexture *texture_crewmate;
    sfSprite *sprite_crewmate;
    sfTexture *texture_floor;
    sfSprite *sprite_floor;
    sfTexture *texture_flycrew;
    sfSprite *sprite_flycrew;
    sfTexture *texture_impostor;
    sfSprite *sprite_impostor;
    sfVector2f pos_impostor;
    sfVector2f pos_menu;
    sfVector2f pos_win;
    sfVector2f pos_lose;
    sfVector2f pos_crewmate;
    sfVector2f pos_floor;
    sfVector2f pos_flycrew;
    sfVector2f pos_pause;
    sfVector2f pos_text;
    sfVector2f pos_nb;
    sfIntRect size_impostor;
    sfIntRect size_rect;
    sfIntRect size_floor;
    sfIntRect size_flycrew;
    sfClock *time2;
    sfMusic *music;
    sfFont *font_win;
    sfFont *font_lose;
    sfFont *font_menu;
    sfFont *font_pause;
    sfFont *font_nb;
    sfText *text_win;
    sfText *text_lose;
    sfText *text_menu;
    sfText *text_pause;
    sfText *text_nb;
    sfEvent event;
    sfFont *font;
    sfText *text;
};

typedef struct all all_t;


int main(int ac, char **av);
void my_putchar(char c);
int my_putstr(char const *str);
void destroy(all_t *obj);
char *int_to_char(int i);
void my_background(all_t *obj);
void menu(all_t *obj);
void flycrew(all_t *obj);
void my_floor(all_t *obj);
void crewmate(all_t *obj);
void impostor(all_t *obj);
void display_nb(all_t *obj);
void put_score(all_t *obj);
void text_menu(all_t *obj);
void display_pause(all_t *obj);
void win(all_t *obj);
void lose(all_t *obj);
void music(all_t *obj);
void destroy_sprite(all_t *obj);
void clock(all_t *obj);
void clock_bis(all_t *obj);
void render(all_t *obj);
void render_bis(all_t *obj);
void help(void);
int disp_help(int ac, char **av);
void check_event(all_t *obj);
void check_event2(all_t *obj);
void check_crewmate(all_t *obj);
void check_impostor(all_t *obj);
#endif
