CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)
HEAD = -I header/
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

obj/%.o : src/%.c header/libft.h
	$(CC) $(HEAD) -c $< -o $@ $(CFLAGS)

clean :
	rm -rf $(OBJS)*.o

fclean : clean
	rm -f $(NAME)

re : fclean all