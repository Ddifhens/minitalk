###################COMPILATION VARIABLES##########################
CC= cc
CFLAGS= -Wall -Werror -Wextra
NAME=minitalk
DIR_GUARD=@mkdir -p $(@D)

###################FILE AND DIRECTORIES VARIABLES################
C_FILES:= client server
OBJ_DIR:=obj/
SRC_DIR:=src/
OBJ_DIR:=obj/
LIB:=lib/
LIBFT_DIR:=$(LIB)libft/
LIBFT:=libft.a
PRT_DIR:=$(LIB)ft_printf/
PRT:=libftprintf.a
BUILD_DIR:=build/

SRCS:= $(addprefix $(SRC_DIR), $(addsuffix .c, $(C_FILES)))
OBJS:= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(C_FILES)))

##################FORMATTING VARIABLES##########################

GREEN="\\e[32m"
BLUE="\\e[34m"
RED="\\e[31m"

END="\\e[0m"

##################MAKE RULES####################################
all : $(NAME)

$(NAME): $(BUILD_DIR)$(LIBFT) $(BUILD_DIR)$(PRT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) \
	-L$(BUILD_DIR) -lft -lftprintf \
	-o $@
	@echo "\n$(GREEN)==========          Compiled Minitalk          ==========$(END)\n"

$(BUILD_DIR)$(LIBFT): 
	#cd into and compile libft
	@make -C  $(LIBFT_DIR) 
	#copy into /build
	$(DIR_GUARD)
	cp $(LIBFT_DIR)$(LIBFT) $(BUILD_DIR)
	@echo "\n$(BLUE)==========          Compiled Libft          ==========$(END)\n"

$(BUILD_DIR)$(PRT):
	#compiling ft_printf
	make -C $(PRT_DIR) 
	#copy into /build 
	$(DIR_GUARD)
	cp $(PRT_DIR)$(PRT) $(BUILD_DIR)
	@echo "\n$(BLUE)==========          Compiled printf          ==========$(END)\n"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	#making sure obj/ exists
	$(DIR_GUARD)
	#compiling into /objs
	$(CC) -g -v $(CFLAGS) -c $< \
		-Iinclude/ \
		-I$(LIBFT_DIR)inc/ \
		-I$(PRT_DIR)include/ \
		-o $@

clean:
	rm -f $(OBJS)
	@echo "\n$(RED)==========          REMOVED TEMP          ==========$(END)\n"

fclean: clean
	#cleaning output program
	rm -f $(NAME)
	rm -rf $(BUILD_DIR)
	#cleaning libft library from /libft
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRT_DIR)
	@echo "\n$(RED)==========          REMOVED ALL          ===========$(END)\n" 

re:fclean all

test: re
	@echo "no tests implemented :( " 
