SRC	=	ft_base.c		\
		ft_format_base.c	\
		ft_format.c		\
		ft_printf.c		\
		ft_printf.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_putstr.c		\

OBJS	= 	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re