# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jenny <jenny@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/08 22:49:11 by jenny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			WrongCat.cpp \
			WrongAnimal.cpp \
			main.cpp
			
NAME	= animals

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

.PHONY: all clean fclean re
