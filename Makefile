###################COMPILATION VARIABLES##########################
CC= cc
CFLAGS= -Wall -Werror -Wextra
NAME=minitalk
DIR_GUARD=@mkdir -p $(@D)

###################FILE AND DIRECTORIES VARIABLES################
C_FILES:= client server
OBJ_DIR:=obj/
SRC_DIR:=src/
OBJ_DIR:=$(pwd)obj/
LIB_DIR:=libft/
LIB:=libft.a

SRCS:= $(addprefix $(SRC_DIR), $(addsuffix .c, $(C_FILES)))
OBJS:= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(C_FILES)))

##################FORMATTING VARIABLES##########################

GREEN="\\e[32m"
BLUE="\\e[34m"
RED="\\e[31m"

END="\\e[0m"

##################MAKE RULES####################################
all : $(NAME)

$(NAME): $(LIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L../$(LIB) -I../$(LIB) -g -o $@
	@echo "\n$(GREEN)==========          Compiled Minitalk          ==========$(END)\n"

$(LIB): 
	#cd into and compile libft (leaves .a on /libft)
	make re -C $(LIB_DIR)
	@echo "\n$(BLUE)==========          Compiled Libft          ==========$(END)\n"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	#making sure obj/ exists
	$(DIR_GUARD)
	#compiling into /objs
	$(CC) -g $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "\n$(RED)==========          REMOVED TEMP          ==========$(END)\n"

fclean: clean
	#cleaning output program
	rm -f $(NAME)
	#cleaning libft library from /libft
	rm -f $(LIB_DIR)$(LIB)
	#cleaning libft objs
	rm -f $(LIB_DIR)*.o
	#cleaning libft from root
	rm -f $(LIB)
	@echo "\n$(RED)==========          REMOVED ALL          ===========$(END)\n" 

re:fclean all

test: re
	@echo "no tests implemented :( " 
