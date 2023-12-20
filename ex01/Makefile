# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 17:30:10 by anouri            #+#    #+#              #
#    Updated: 2023/12/20 17:31:46 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = PhoneBook.cpp \
		Contact.cpp \
		utils.cpp \
		main.cpp \

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