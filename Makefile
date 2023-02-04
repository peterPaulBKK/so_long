# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 21:38:14 by bsirikam          #+#    #+#              #
#    Updated: 2023/02/04 17:16:30 by pniyom           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = main.c 

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

leak:
	@leaks -atExit -- ./so_long map.ber

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
