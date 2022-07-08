# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/08 19:35:06 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			WrongCat.cpp \
			WrongAnimal.cpp \
			main.cpp
			
NAME	= fixed

RM	= @rm -f

CFLAGS = -Wall -Wextra -Werror

CC = c++ -std=c++98

all:	$(NAME)		

$(NAME):	${SRCS}
			@${CC} ${CFLAGS} ${SRCS} -o ${NAME}			

clean:

fclean:	clean
	${RM} ${NAME}

re:	fclean all
