# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/06/30 12:42:55 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			main.cpp
			
NAME	= unnecessary_violence

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
