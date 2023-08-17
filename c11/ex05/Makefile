CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
RUN		= ./${NAME}

NAME	= do-op

SRCDIR	= src
INCDIR	= include

SRCS	= ${SRCDIR}/ft_helper.c \
	  		${SRCDIR}/ft_atoi.c \
	  		${SRCDIR}/ft_find_operator.c \
	  		calc.c \
	  		main.c
OBJS	= ${SRCS:.c=.o}

all:		${NAME}

%.o:%.c
			${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o $@ ${OBJS}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all


.PHONY : 	re fclean clean all tests
