SRCS =	ft_printf.c ft_put_unsigned_n.c ft_putaddr.c ft_putchar.c \
		ft_putlower_hexa.c ft_putnbr.c ft_putstr.c ft_putupper_hexa.c

OBJS = $(SRCS:.c=.o)

HEADER = printf.h

FLAGS = -Wall -Wextra -Werror

CC = cc

NAME = libftprintf.a

all: $(NAME)

.c.o:
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar -crs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
