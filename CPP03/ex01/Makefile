# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/07 17:29:31 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ClapTrap.cpp \
			ScavTrap.cpp \
			main.cpp
			
NAME	= scavtrap

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
