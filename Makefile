# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 21:38:14 by bsirikam          #+#    #+#              #
#    Updated: 2023/02/14 17:56:25 by pniyom           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = 	main.c\
		ft_check_ac_equal_2.c\
		free_game.c\
		ft_get_line.c\
		ft_s_len_with_nl.c\
		ft_check_line.c\
		ft_create_map.c\
		ft_check_border.c\
		ft_locate_item.c\
		ft_flood_fill.c\
		ft_create_definitive_map.c\
		ft_check_error_e_c.c\
		ft_render.c\
		ft_floor.c\
		ft_wall.c\
		ft_put_img.c\
		ft_cpy_to_definitive.c\
		ft_hook.c\
		ft_printf/ft_printf_utils.c ft_printf/ft_printf_utils2.c ft_printf/ft_printf_utils3.c ft_printf/ft_printf.c ft_printf/puthex.c ft_printf/put_pointer.c\
		libft/ft_atoi.c libft/ft_striteri.c libft/ft_bzero.c libft/ft_lstnew.c libft/ft_strjoin.c libft/ft_calloc.c libft/ft_lstsize.c libft/ft_strlcat.c libft/ft_isalnum.c\
		libft/ft_memchr.c libft/ft_strlcpy.c libft/ft_isalpha.c libft/ft_memcmp.c libft/ft_isascii.c libft/ft_memcpy.c libft/ft_strmapi.c libft/ft_isdigit.c libft/ft_memmove.c\
		libft/ft_strncmp.c libft/ft_isprint.c libft/ft_memset.c libft/ft_strnstr.c libft/ft_putchar_fd.c libft/ft_strrchr.c  libft/ft_putendl_fd.c\
		libft/ft_strtrim.c libft/ft_putnbr_fd.c libft/ft_substr.c libft/ft_lstclear.c libft/ft_putstr_fd.c libft/ft_tolower.c libft/ft_lstdelone.c\
		libft/ft_split.c libft/ft_toupper.c libft/ft_lstiter.c libft/ft_lstlast.c libft/ft_strdup.c\
		GNL/get_next_line_utils.c GNL/get_next_line.c\

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
HEADER = so_long.h
MLX_INC = -LMLX -lMLX  -framework OpenGL -framework AppKit

ifeq ($(shell uname), Linux)
MLX_INC	=	-L ./mlx_linux/ -lmlx -Ilmlx -lXext -lX11
endif

MLX_DIR = ./MLX

ifeq ($(shell uname), Linux)
MLX_DIR	=	./mlx_Linux
endif

MLX_O_C = -IMLX -c $< -o $@
ifeq ($(shell uname), Linux)
MLX_O_C	=	-I/usr/include -Imlx_linux -O3 -c $< -o $@
endif

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(MLX_O_C)

all: MLX_LIB $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(MLX_INC) 

$(LIBFT):
		make  -C ./libft
leak:
	@leaks -atExit -- ./so_long test_map.ber

MLX_LIB:
	@make -C $(MLX_DIR) 2> /dev/null

norm:
	@norminette -R CheckForbiddenHeaderSource $(SRC)
	@norminette -R CheckDefine *.h

clean:
	@make -C $(MLX_DIR) clean
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
