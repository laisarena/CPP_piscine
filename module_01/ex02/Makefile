# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 10:35:47 by lfrasson          #+#    #+#              #
#    Updated: 2021/10/11 19:34:35 by lfrasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := thisIsBrain

CC := clang++
CFLAGS := -Wall -Wextra -Werror
CFLAGS += -g
CFLAGS += -std=c++98
RM := rm -rf

SRCS := main.cpp


OBJDIR := ./objs/
OBJS := $(addprefix $(OBJDIR), $(notdir $(SRCS:.cpp=.o)))

$(OBJDIR)%.o:	%.cpp
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
