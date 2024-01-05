NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -fPIE
CC = cc 
SRCS = ft_ctype/ft_isalnum.c ft_ctype/ft_isascii.c ft_ctype/ft_isprint.c ft_ctype/ft_toupper.c \
	ft_ctype/ft_isalpha.c ft_ctype/ft_isdigit.c  ft_ctype/ft_tolower.c \
	ft_lst/ft_lstadd_back.c  ft_lst/ft_lstclear.c  ft_lst/ft_lstiter.c ft_lst/ft_lstmap.c ft_lst/ft_lstsize.c \
    ft_lst/ft_lstadd_front.c ft_lst/ft_lstdelone.c ft_lst/ft_lstlast.c ft_lst/ft_lstnew.c \
    ft_stdio/ft_putchar_fd.c ft_stdio/ft_putendl_fd.c ft_stdio/ft_putnbr_fd.c ft_stdio/ft_putstr_fd.c \
    ft_stdio/ft_int_putchar_fd.c ft_stdio/ft_int_putstr_fd.c \
    ft_stdio/ft_printf/ft_printf.c ft_stdio/ft_printf/ft_printf_utils.c ft_stdio/ft_printf/ft_printf_utils_extra.c \
    ft_stdlib/ft_atoi.c ft_stdlib/ft_calloc.c ft_stdlib/ft_itoa.c ft_stdlib/ft_itoa_unsigned.c\
	ft_string/ft_bzero.c ft_string/ft_memmove.c ft_string/ft_strdup.c ft_string/ft_strlcpy.c ft_string/ft_strnstr.c \
	ft_string/ft_memchr.c ft_string/ft_memset.c ft_string/ft_striteri.c ft_string/ft_strlen.c ft_string/ft_strrchr.c \
	ft_string/ft_memcmp.c ft_string/ft_split.c ft_string/ft_strjoin.c ft_string/ft_strmapi.c ft_string/ft_strtrim.c \
	ft_string/ft_memcpy.c ft_string/ft_strchr.c ft_string/ft_strlcat.c ft_string/ft_strncmp.c ft_string/ft_substr.c \
	ft_gnl/get_next_line.c ft_gnl/get_next_line_utils.c


OBJS = $(SRCS:.c=.o)


BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)	$(BONUS_SRCS)
	cc -shared -o libft.so $(OBJS) $(BONUS_OBJS) 
