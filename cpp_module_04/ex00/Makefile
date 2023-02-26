# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:32:28 by shoffman          #+#    #+#              #
#    Updated: 2023/02/26 14:51:39 by shoffman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OUT		= polymorphism
CC		= c++
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -g -std=c++98
VALGR	= valgrind-out.txt

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all: $(OUT)

$(OUT): $(OBJS)
	@$(CC) $(FLAGS) -o $(OUT) $(OBJS)
	@echo "$(GREEN)Compiled$(CLR_RMV)"

re:	clean all

clean:
	@rm -f $(OBJS) $(OUT) $(VALGR)
	@echo "$(RED)Deleted$(CLR_RMV)"
	
run: $(OUT)
	@echo "$(PURPLE)Executing$(CLR_RMV)"
	@./$(OUT)

val:	re
	@echo "$(CYAN)Executing$(CLR_RMV)"
	@valgrind --leak-check=full \
		--show-leak-kinds=all \
		--track-origins=yes \
		--verbose \
		--log-file=$(VALGR) \
		./$(OUT)
		@code $(VALGR)
		@echo "$(YELLOW)Valgrind file created$(CLR_RMV)"

.PHONY:	all clean re run val

CLR_RMV	= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
CYAN 	= \033[1;36m
PURPLE	= \033[1;35m