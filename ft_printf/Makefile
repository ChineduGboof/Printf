NAME := libftprintf.a

.PHONY: all bonus clean fclean re

CFLAGS := -Wall -Werror -Wextra

SRCS := \
	ft_printf.c print_char.c print_hex.c print_nbr.c print_pointer.c print_string.c print_udecimal.c

OBJS := $(SRCS:.c=.o)

$(NAME) : $(OBJS)
		ar -rcs $(NAME) $(OBJS)

.o: .c
		cc -c $(CFLAGS) $@ $<

fclean : clean
		rm -f $(NAME)

clean :
		rm -f $(OBJS)

re : fclean all

all : $(NAME)