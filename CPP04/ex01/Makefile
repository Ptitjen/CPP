# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/11 12:40:31 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			Brain.cpp \
			main.cpp
			
NAME	= animals

RM	= @rm -f

CFLAGS = -Wall -Wextra -Werror -g

CC = c++ -std=c++98

all:	$(NAME)		

$(NAME):	${SRCS}
			@${CC} ${CFLAGS} ${SRCS} -o ${NAME}			

clean:

fclean:	clean
	${RM} ${NAME}

re:	fclean all
