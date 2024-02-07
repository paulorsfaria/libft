GREEN = \033[38;5;46m
RED = \033[0;31m
On_IRed= \033[0;101m
RESET = \033[0m
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -fPIE
CC = cc

CTYPE = sources/ft_ctype/ft_isalnum.c sources/ft_ctype/ft_isascii.c \
			sources/ft_ctype/ft_isprint.c sources/ft_ctype/ft_toupper.c \
			sources/ft_ctype/ft_isalpha.c sources/ft_ctype/ft_isdigit.c \
			sources/ft_ctype/ft_tolower.c

LST = sources/ft_lst/ft_lstadd_back.c  sources/ft_lst/ft_lstclear.c \
			sources/ft_lst/ft_lstiter.c sources/ft_lst/ft_lstmap.c \
			sources/ft_lst/ft_lstsize.c sources/ft_lst/ft_lstadd_front.c \
			sources/ft_lst/ft_lstdelone.c sources/ft_lst/ft_lstlast.c \
			sources/ft_lst/ft_lstnew.c

STDIO = sources/ft_stdio/ft_putchar_fd.c sources/ft_stdio/ft_putendl_fd.c \
			sources/ft_stdio/ft_putnbr_fd.c sources/ft_stdio/ft_putstr_fd.c \
			sources/ft_stdio/ft_int_putchar_fd.c sources/ft_stdio/ft_int_putstr_fd.c \
			sources/ft_stdio/ft_printf/ft_printf.c sources/ft_stdio/ft_printf/ft_printf_utils.c \
			sources/ft_stdio/ft_printf/ft_printf_utils_extra.c

STDLIB = sources/ft_stdlib/ft_atoi.c sources/ft_stdlib/ft_calloc.c \
			sources/ft_stdlib/ft_itoa.c sources/ft_stdlib/ft_itoa_unsigned.c \
			sources/ft_stdlib/ft_atoi_double.c sources/ft_stdlib/ft_atoi_long.c

STRING = sources/ft_string/ft_bzero.c sources/ft_string/ft_memmove.c \
			sources/ft_string/ft_strdup.c sources/ft_string/ft_strlcpy.c \
			sources/ft_string/ft_strnstr.c sources/ft_string/ft_memchr.c \
			sources/ft_string/ft_memset.c sources/ft_string/ft_striteri.c \
			sources/ft_string/ft_strlen.c sources/ft_string/ft_strrchr.c \
			sources/ft_string/ft_memcmp.c sources/ft_string/ft_split.c  \
			sources/ft_string/ft_strjoin.c sources/ft_string/ft_strmapi.c \
			sources/ft_string/ft_strtrim.c sources/ft_string/ft_memcpy.c \
			sources/ft_string/ft_strchr.c sources/ft_string/ft_strlcat.c \
			sources/ft_string/ft_strncmp.c sources/ft_string/ft_substr.c \
			sources/ft_string/ft_tolowerstr.c

GNL = sources/ft_gnl/get_next_line.c sources/ft_gnl/get_next_line_utils.c

SRCS = $(CTYPE) $(LST) $(STDIO) $(STDLIB) $(STRING)

OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@echo "Done"


$(NAME): check_o  $(OBJS)
	ar rc $(NAME) $(OBJS)

check_o:
	@if [ -e sources/ft_lst/ft_lstnew.o ]; then \
		echo "$(RED)Object files already exist."; \
	else \
		echo "$(GREEN)Compiling..."; \
	fi

clean:
	rm -f $(OBJS)
	@echo "$(RED)/// Extermination half complete ///"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)/// Extermination complete ///"
	@echo "$(On_IRed)/// Thank you for using our Make-a-file services ///$(RESET)"

re: fclean all

.PHONY:		all clean fclean re

.SILENT:
