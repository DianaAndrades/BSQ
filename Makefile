##
## EPITECH PROJECT, 2022
## BSQ
## File description:
## makefile
##

SRC		=	lib/src/my_strlen.c	\
			lib/src/my_putchar.c	\
			lib/src/my_strcmp.c	\
			lib/src/my_putstr.c	\
			lib/src/my_put_nbr.c	\
			lib/src/my_atoi.c	\
			src/main.c	\
			src/bsq.c	\
			src/error_handling.c	\
			src/save_map.c	\
			src/str_to_array.c	\
			src/changing_into_nbr.c	\
			src/my_print_array.c	\
			src/read_file.c	\
			src/my_atoi_bsq.c	\
			src/algorithm.c	\
			src/find_biggest_square.c	\
			src/print_x_square.c	\
			src/ini_structures.c	\
			src/free_function.c	\
			src/generating.c

OBJ		= 	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	= 	-W -Wextra -Wall -I./include/ -I./lib/include/

all:	$(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(SRC) $(CFLAGS) -g3

clean:
		rm -rf $(OBJ)
		rm -f *~ *#

fclean: clean
		rm -rf $(NAME)

re: fclean all
