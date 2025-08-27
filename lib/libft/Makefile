CC= cc 
CFLAGS= -Wall -Werror -Wextra
NAME= libft.a
SRC_DIR:=src/
OBJ_DIR:=obj/
INC:=inc/
DIR_GUARD=@mkdir -p $(@D)

C_FILES= ft_bzero ft_isalpha ft_isdigit ft_memcpy ft_memset ft_isalnum ft_isascii ft_isprint ft_memmove ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

BC_FILES= ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus ft_lstadd_back_bonus ft_lstdelone_bonus ft_lstmap_bonus ft_lstclear_bonus ft_lstiter_bonus ft_lstnew_bonus

BONUS:= $(addprefix $(SRC_DIR), $(addsuffix .c, $(BC_FILES)))
SRCS:= $(addprefix $(SRC_DIR), $(addsuffix .c, $(C_FILES)))
OBJS:= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(C_FILES)))

all: $(NAME)

$(NAME): $(OBJS)
	ar rsc $(NAME) $(OBJS) 

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	#making sure obj/ exists
	$(DIR_GUARD)
	#compiling into /objs
	$(CC) -g $(CFLAGS) -I$(INC) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
