CC =         gcc
CFLAGS =     -Wall -Wextra -Werror
RM =         rm -f

SRCS =        ${addprefix srcs/, ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isprint.c \
			  ft_isascii.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_strlen.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strdup.c \
			  ft_bzero.c \
			  ft_memset.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memchr.c \
			  ft_memcmp.c}
OBJS =         ${SRCS:.c=.o}

NAME =     libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
