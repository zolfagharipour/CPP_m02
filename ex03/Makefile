# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 19:13:38 by mzolfagh          #+#    #+#              #
#    Updated: 2024/05/19 19:21:36 by mzolfagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSP

SRCS =  main.cpp Bsp.cpp Fixed.cpp 

OBJS = ${SRCS:.c=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM	=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} $^

bonus: ${BONUS_OBJS}
	${CC} ${CFLAGS} -o ${NAME} $^

# clean: 
# 	${RM} ${OBJS} ${BONUS_OBJS}


fclean:
	${RM} ${NAME} ${CHECK}

re: fclean all

.PHONY: all bonus clean fclean re