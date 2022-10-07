CC =         gcc
CFLAGS =     -Wall -Wextra -Werror
RM =         rm -f

SRCS =        ft_isalpha.c \
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
			  ft_memcmp.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strncmp.c \
			  ft_strnstr.c \
			  ft_atoi.c \
			  ft_striteri.c \
			  ft_strmapi.c \
			  ft_itoa.c \
			  ft_strtrim.c \
			  ft_calloc.c
OBJS =        ${SRCS:.c=.o}
SRCS_BONUS =  ${addsuffix _bonus.c, ft_lstnew \
			  ft_lstadd_front \
			  ft_lstsize \
			  ft_lstlast \
			  ft_lstadd_back \
			  ft_lstdelone \
			  ft_lstclear \
			  ft_lstiter \
			  ft_lstmap}
OBJS_BONUS =  ${SRCS_BONUS:.c=.o}

NAME =     libft.a

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: all ${OBJS_BONUS}
	ar r ${NAME} ${OBJS_BONUS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
