# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jenny <jenny@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:13:33 by jeulliot          #+#    #+#              #
#    Updated: 2022/07/28 22:21:30 by jenny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp 
			
NAME	= templates

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
