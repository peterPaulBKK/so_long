# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 19:13:26 by pniyom            #+#    #+#              #
#    Updated: 2023/02/05 00:25:57 by pniyom           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS =  
RM  = rm -f
OBJS = $(SRCS:.c=.o)
LIBC = ar -rcs

all: $(NAME)

%o: %c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) :  $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS) 

fclean:	clean
	$(RM)  $(NAME)

re:	fclean all
.PHONY: all bonus clean fclean re
