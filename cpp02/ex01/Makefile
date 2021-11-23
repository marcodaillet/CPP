# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:21:24 by mdaillet          #+#    #+#              #
#    Updated: 2021/11/19 19:10:54 by mdaillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp \
				Fixed.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
FLAGS		= -Wextra -Werror -Wall -I.
RM			= rm -Rf

NAME		= Fixed

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:		all clean fclean re test
