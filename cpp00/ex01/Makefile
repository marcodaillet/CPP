# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:21:24 by mdaillet          #+#    #+#              #
#    Updated: 2021/11/11 18:47:52 by mdaillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= contact.cpp main.cpp myapb.cpp
OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
FLAGS		= -Wextra -Werror -Wall -I.
RM			= rm -Rf

NAME		= myawesomephonebook

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:		all clean fclean re test
