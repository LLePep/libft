include doc_mk/file.mk

CC = cc
CFLAGS = -Wall -Werror -Wextra -I include/ -MMD -MP

HEAD := libft.h
NAME := libft.a

.PHONY : clean fclean re all bonus

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $^

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all