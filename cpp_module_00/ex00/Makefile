# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:32:28 by shoffman          #+#    #+#              #
#    Updated: 2023/02/16 15:28:41 by shoffman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp
OUT		= megaphone
CC		= c++
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all: $(OUT)

$(OUT): $(OBJS)
	@$(CC) $(FLAGS) -o $(OUT) $(OBJS)
	@echo "$(GREEN)Compiled$(CLR_RMV)"

re:	clean all

clean:
	@rm -f $(OBJS) $(OUT)
	@echo "$(RED)Deleted$(CLR_RMV)"

run1: $(OUT)
	@./$(OUT) "shhhhh... I think the students are asleep..."

run2: $(OUT)
	@./$(OUT) Damnit " ! " "Sorry students, I thought this thing was off."
	
run3: $(OUT)
	@./$(OUT)

.PHONY:	all clean re

CLR_RMV	= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
CYAN 	= \033[1;36m
PURPLE	= \033[1;35m