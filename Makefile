CC =         gcc
CFLAGS =     -Wall -Wextra -Werror
RM =         rm -f

SRCSDIR =     srcs
SRCSF =        ft_string_checks.c ft_strput_fd.c
SRCS =         ${foreach file, ${SRCSF}, ${addprefix} ${SRCSDIR}/${file}}
OBJS =         ${SRCS:.c=.o}
DEPS =         includes/
TESTSDIR =     tests
TESTSF =       ft_all_tests.c ft_random_tests.c
TESTS =         ${foreach file, ${TESTSF}, ${addprefix} ${TESTSDIR}/${file}}
TOBJS =         ${TESTS:.c=.o}
TDEPS =         tests/includes/


TARGET =     libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${DEPS}

all: ${TARGET}

${TARGET}: ${OBJS}
	ar rcs ${TARGET} ${OBJS}

tests: all ${TOBJS}
	${CC} ${CFLAGS} -o all_tests ${TOBJS} -L. -lft -I${DEPS} -I${TDEPS}

clean:
	${RM} ${OBJS} ${TOBJS} all_tests

fclean: clean
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re
