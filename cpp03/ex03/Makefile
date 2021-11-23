# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 11:30:49 by mdaillet          #+#    #+#              #
#    Updated: 2021/11/20 20:20:02 by mdaillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++11

NAME = Diamondtrap

SRCS = main.cpp Claptrap.cpp Scavtrap.cpp Fragtrap.cpp Diamondtrap.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)


%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: fclean all


test: re
	./$(NAME)


.PHONY: all clean fclean re test
