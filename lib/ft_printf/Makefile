CC= cc
CFLAGS= -Wall -Werror -Wextra
NAME=libftprintf.a
DIR_GUARD=@mkdir -p $(@D)

C_FILES= ft_printf ft_putchar ft_seetype ft_printstr ft_putnbr ft_strlen ft_printptr ft_puthex ft_putunbr

SRC_DIR=src/
INC_DIR=inc/
OBJ_DIR=obj/

SRCS= $(addprefix $(SRC_DIR), $(addsuffix .c, $(C_FILES)))
OBJS= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(C_FILES)))

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "compiled library!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(DIR_GUARD)
	$(CC) -g $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "cleaned objects!"

fclean: clean
	@rm -f $(NAME)
	@echo "cleaned objects and .a file!"

re: fclean all

.PHONY: all clean fclean re
