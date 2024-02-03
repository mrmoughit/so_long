NAME = so_long

CC = cc

CFLAGS =  -Wall -Wextra -Werror

HEADER = so_long.h

SRC=ft_check_extension.c\
	ft_check_cole.c\
	ft_check_key.c\
	ft_check_map_element.c\
	ft_creat_new_window.c\
	ft_free.c\
	ft_down.c\
	ft_left.c\
	ft_up.c\
	ft_moves.c\
	ft_moves_helper.c\
	ft_destroy_images.c\
	ft_set_images.c\
	ft_is_rectangle.c\
	ft_map_is_close.c\
	ft_parsing.c\
	ft_print_error.c\
	ft_split.c\
	get_next_line.c\
	get_next_line_utils.c\
	main.c\
	ft_right.c\
	ft_set_element.c\
	ft_putnbr.c\
	ft_swap.c\

OBG = ${SRC:.c=.o}

all: ${NAME}

%.o : %.c $(HEADER)
	cc ${CFLAGS} -c $< -o $@

${NAME} : ${OBG} $(HEADER)
	cc ${OBG} -lmlx -framework OpenGL -framework AppKit -o ${NAME}

clean :
	rm -rf ${OBG}

fclean : clean
	rm -rf ${NAME}

re : fclean all 

PHONY: clean