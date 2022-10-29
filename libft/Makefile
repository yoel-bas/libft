CC = cc
FLAGS = -Werror -Wall -Wextra
NAME = libft.a
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@ar -rc ${NAME} ${OBJ}

%.o : %.c
	${CC} ${FLAGS} -c $<

fclean : clean
	@rm -f ${NAME}

clean :
	@rm -f ${OBJ}

re : fclean all