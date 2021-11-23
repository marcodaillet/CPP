# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 16:21:24 by mdaillet          #+#    #+#              #
#    Updated: 2021/11/16 18:38:56 by mdaillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
FLAGS		= -Wextra -Werror -Wall -I.
RM			= rm -Rf

NAME		= Zombie

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:		$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:		all clean fclean re test
