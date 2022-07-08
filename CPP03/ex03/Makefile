# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/08 17:45:43 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= DiamondTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			ClapTrap.cpp \
			main.cpp
			
NAME	= diamondtrap

RM	= @rm -f

CFLAGS = -Wall -Wextra -Werror -Wshadow

CC = c++ -std=c++98

all:	$(NAME)		

$(NAME):	${SRCS}
			@${CC} ${CFLAGS} ${SRCS} -o ${NAME}			

clean:

fclean:	clean
	${RM} ${NAME}

re:	fclean all
