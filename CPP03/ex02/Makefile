# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/08 13:29:50 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= FragTrap.cpp \
			ScavTrap.cpp \
			ClapTrap.cpp \
			main.cpp
			
NAME	= fragtrap

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
