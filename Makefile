SRCS	= ${wildcard *.c} ${wildcard SRCS/*.c} ${wildcard SRCS/*/*.c}

OBJS	=${SRCS:.c=.o}

CHECKER_OBJS	=${CHECKER_SRCS:.c=.o}

NAME	= push_swap

CHECKER_NAME	= checker

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

all: ${NAME}

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

dg:
		@${CC} -Wall -Werror -Wextra -g  ${SRCS} -o ${NAME}

${CHECKER_NAME}: ${CHECKER_OBJS}
		@${CC} ${CFLAGS} ${CHECKER_OBJS} -o ${CHECKER_NAME}
		
clean:
		@rm -rf ${OBJS}

clean_checker:
		@rm -rf ${CHECKER_OBJS}

fclean: clean
		@rm -rf ${NAME}

fclean_checker: clean_checker
		@rm -rf ${CHECKER_NAME}

fclean_all: fclean fclean_checker

re: fclean ${NAME}

re_checker: fclean_checker checker

.PHONY: all clean fclean re