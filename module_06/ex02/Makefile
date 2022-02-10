# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 18:04:17 by lfrasson          #+#    #+#              #
#    Updated: 2022/02/09 20:18:16 by lfrasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := real_type

CC := c++
CFLAGS := -Wall -Wextra -Werror
CFLAGS += -g
CFLAGS += -std=c++98
RM := rm -rf

HEADERS := header.h 
SRCS += main.cpp functions.cpp


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
	$(RM) *_shrubbery

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
