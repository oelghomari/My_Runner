##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

NAME	=	my_runner

CC	=	gcc

RM	=	rm -f

SRCS	=	src/destroy.c	\
		src/my_runner.c	\
		src/int_to_char.c	\
		src/background_func.c	\
		src/sprites_func.c	\
		src/score.c		\
		src/menu.c		\
		src/event.c		\
		src/play_music.c	\
		src/clock.c		\
		src/render.c		\
		src/help.c		\
		src/check.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
