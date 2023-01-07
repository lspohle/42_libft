NAME		= test.a

SUBDIR		= libft

SRCS		= output.c ft_atoi_test.c ft_bzero_test.c \
			  ft_calloc_test.c ft_isalnum_test.c ft_isalpha_test.c ft_isascii_test.c \
			  ft_isdigit_test.c ft_isprint_test.c ft_itoa_test.c ft_memchr_test.c ft_memcmp_test.c \
			  ft_memcpy_test.c ft_memmove_test.c ft_memset_test.c ft_putchar_fd_test.c ft_putendl_fd_test.c \
			  ft_putnbr_fd_test.c ft_putstr_fd_test.c ft_split_test.c ft_strchr_test.c ft_strdup_test.c \
			  ft_strjoin_test.c ft_strlcat_test.c ft_strlcpy_test.c ft_strlen_test.c \
			  ft_strncmp_test.c ft_strnstr_test.c ft_strrchr_test.c ft_strtrim_test.c ft_substr_test.c \
			  ft_tolower_test.c ft_toupper_test.c ft_strmapi_test.c ft_striteri_test.c \
			  ft_lstadd_back_test.c ft_lstadd_front_test.c ft_lstsize_test.c ft_lstmap_test.c

OBJS		= ${SRCS:.c=.o}

GCCW		= gcc -Wall -Wextra -Werror

AR			= ar -r

RM			= rm -f

${NAME}:	${OBJS} ${SUBDIR}
			cp ../libft/libft.a .
			mv libft.a ${NAME}
			${AR} ${NAME} ${OBJS}
			${GCCW} main.c test.a -o executable && ./executable && rm executable
			make fclean

${OBJS}:	${SRCS}
			${GCCW} -c ${SRCS}

${SUBDIR}:
			echo "\n\033[1;36mNorminette\033[0;33m\n"
			cd ../libft && norminette && make bonus

all:		${NAME}

clean:
			${RM} ${OBJS}
			cd ../libft && ${MAKE} -s fclean

fclean:		clean
			${RM} ${NAME}
			cd ../libft && ${MAKE} -s fclean

re:			fclean all

.PHONY:		all clean fclean re
