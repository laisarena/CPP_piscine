# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 20:49:19 by lfrasson          #+#    #+#              #
#    Updated: 2021/10/12 20:49:23 by lfrasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := replace

CC := clang++
CFLAGS := -Wall -Wextra -Werror
CFLAGS += -g
CFLAGS += -std=c++98
RM := rm -rf

SRCS := 
HEADERS := $(SRCS:.cpp=.hpp)
SRCS += main.cpp


OBJDIR := ./objs/
OBJS := $(addprefix $(OBJDIR), $(notdir $(SRCS:.cpp=.o)))

$(OBJDIR)%.o:	%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
