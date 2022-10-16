SRCS    = $(filter-out main.c, $(wildcard *.c))
OBJS    = ${SRCS:.c=.o}
NAME    = libft.a
CC		= gcc
.c.o:
	$(CC) -Wall -Wextra -Werror -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

# so:
# 	$(CC) -nostartfiles -fPIC $(SRCS)
# 	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

# libft.a: main.c
# 	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re: fclean all
.PHONY: all clean fclean re .c.o norm
