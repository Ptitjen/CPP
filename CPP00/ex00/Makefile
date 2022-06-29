# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/06/29 14:21:17 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp

NAME	= megaphone

RM	= @rm -f

CFLAGS = -Wall -Wextra -Werror

#CC = g++ -std=c++98
CC = clang++

all:	$(NAME)

$(NAME):	${SRCS}
			@${CC} ${CFLAGS} ${SRCS} -o ${NAME}			

clean:

fclean:	clean
	${RM} ${NAME}

re:	fclean all
