NAME		= test.a

SRCS		= ft_atoi_test.c ft_bzero_test.c ft_isalnum_test.c ft_isalpha_test.c ft_isascii_test.c \
			  ft_isdigit_test.c ft_isprint_test.c ft_itoa_test.c ft_memchr_test.c ft_memcmp_test.c \
			  ft_memcpy_test.c ft_memmove_test.c ft_memset_test.c ft_putchar_fd_test.c ft_putendl_fd_test.c \
			  ft_putnbr_fd_test.c ft_putstr_fd_test.c ft_split_test.c ft_strchr_test.c ft_strdup_test.c \
			  ft_strdup_test.c ft_strjoin_test.c ft_strlcat_test.c ft_strlcpy_test.c ft_strlen_test.c \
			  ft_strncmp_test.c ft_strnstr_test.c ft_strrchr_test.c ft_strtrim_test.c ft_substr_test.c \
			  ft_tolower_test.c ft_toupper_test.c ft_calloc_test.c test_successful.c test_failed.c

BSRCS		= ft_lstadd_back_test.c ft_lstadd_front_test.c ft_lstsize_test.c

OBJS		= ${SRCS:.c=.o}

BOBJS		= ${BSRCS:.c=.o}

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= ar -r

RM			= rm -f

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

${OBJS}:	${SRCS}
			${GCC} ${CFLAGS} -c ${SRCS}

${BOBJS}:	${BSRCS}
			${GCC} ${CFLAGS} -c ${BSRCS} ${SRCS}

all:		${NAME}

bonus:		${BOBJS} ${OBJS}
			${AR} ${NAME} ${BOBJS} ${OBJS}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
