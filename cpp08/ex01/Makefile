# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 11:30:49 by mdaillet          #+#    #+#              #
#    Updated: 2021/11/30 12:27:25 by mdaillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp span.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
FLAGS		= -Wextra -Werror -Wall -I.
RM			= rm -Rf

NAME		= span

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:		all clean fclean re test

