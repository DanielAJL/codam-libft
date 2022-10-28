# SRCS    = $(filter-out main.c, $(wildcard *.c))
# OBJS    = ${SRCS:%.c=obj/%.o}
# NAME    = libft.a
# CC		= gcc

# ${NAME}: ${OBJS}
# 	ar rc $^ -o $@

# obj/%.o: %.c
# 	@mkdir -p obj
# 	$(CC) -Wall -Wextra -Werror -c $< -o $@

# all: ${NAME}

# # so:
# # 	$(CC) -nostartfiles -fPIC $(SRCS)
# # 	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

# # libft.a: main.c
# # 	$(CC) $(CFLAGS) -o $@ $^
# clean:
# 	rm -rdf obj
# fclean: clean
# 	rm -f ${NAME}
# re: fclean all
# .PHONY: all clean fclean re .c.o norm


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
