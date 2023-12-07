# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nabboud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 17:34:03 by nabboud           #+#    #+#              #
#    Updated: 2023/12/07 14:28:43 by nabboud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	printf
CC 		= 	gcc
CFLAGS 		= 	-Wall -Wextra -Werror
RM 		=	rm -rf
SRC		= 	ft_found_u.c ft_found_x.c ft_found_d.c ft_found_s.c ft_printf.c ft_found_c.c ft_found_p.c libft.c
OBJ_DIR		=	bin
OBJ		= 	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ): $(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	@$(RM) $(OBJ_DIR)	

fclean:	clean
	@$(RM) $(NAME) a.out bin

re: fclean all

.PHONY: all clean fclean re