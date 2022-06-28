# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/06/28 20:13:47 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp \
			phonebook.class.cpp \
			contact.class.cpp

NAME	= phonebook

RM	= @rm -f

CFLAGS = -Wall -Wextra -Werror

CC = g++ -std=c++98

all:	$(NAME)		

$(NAME):	${SRCS}
			@${CC} ${CFLAGS} ${SRCS} -o ${NAME}			

clean:

fclean:	clean
	${RM} ${NAME}

re:	fclean all
