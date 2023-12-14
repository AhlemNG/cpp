# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 13:28:38 by anouri            #+#    #+#              #
#    Updated: 2023/12/14 15:30:19 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp \

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.c 
	${CC} ${FLAGS} -cpp $< -o $@
	

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re