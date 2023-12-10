# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nabil <nabil@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 17:34:03 by nabboud           #+#    #+#              #
#    Updated: 2023/12/10 17:35:27 by nabil            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME 		= 	libftprintf
# CC 		= 	gcc
# CFLAGS 		= 	-Wall -Wextra -Werror
# RM 		=	rm -rf
# SRC		= 	ft_found_u.c ft_found_x.c ft_found_d.c ft_found_s.c ft_printf.c ft_found_c.c ft_found_p.c libft.c
# OBJ_DIR		=	bin
# OBJ		= 	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# $(OBJ): $(OBJ_DIR)/%.o: %.c
# 	@mkdir -p $(@D)
# 	@$(CC) $(CFLAGS) -c $< -o $@
	
# clean:
# 	@$(RM) $(OBJ_DIR)	

# fclean:	clean
# 	@$(RM) $(NAME) a.out bin

# re: fclean all

# .PHONY: all clean fclean re

NAME	=	libftprintf.a
CC	=	gcc
CCFLAGS	=	-Wall -Wextra -Werror

BIN	=	bin
SRC	=	ft_found_u.c ft_found_x.c ft_found_d.c ft_found_s.c ft_printf.c ft_found_c.c ft_found_p.c libft.c
OBJ	=	$(addprefix $(BIN)/, $(SRC:.c=.o))


# **************************************************************************** #
# COLORS

GREEN		= \033[0;32m
GREY		= \033[1;30m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
CYAN		= \033[0;36m
END_COLOR	= \033[0;39m


# **************************************************************************** #
# RULES

all: $(NAME)

$(BIN)/%.o: src/%.c | $(BIN)
	@echo "$(BLUE)[Compiling]$(END_COLOR) $<"
	@$(CC) $(CCFLAGS) -c $< -o $@

$(BIN):
	@echo "$(YELLOW)[BIN]$(END_COLOR) Creating bin folder"
	@mkdir -p $(BIN)

$(NAME): $(BIN) $(OBJ)
	@echo "$(CYAN)[Library]$(END_COLOR) Creating libftprintf.a"
	@ar rcs $(NAME) $(OBJ)
	@echo "$(GREEN)[Success]$(END_COLOR) Libftprintf is ready !"

clean:
	@rm -rf $(BIN)
	@echo "$(GREY)[Clean]$(END_COLOR) Objects have been deleted !"

fclean:	clean
	@rm -rf $(NAME) a.out
	@echo "$(GREY)[Clean]$(END_COLOR) Libftprintf.a & executable has been deleted !"

re: fclean all

.PHONY: all clean fclean re
