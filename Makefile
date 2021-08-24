NAME	= libft
CC	= clang
CFLAGS	= -Wall -Wextra -Werror
CFILES	= ft_isupper.c \
	  ft_islower.c \
	  ft_isalpha.c
OBJS	= $(CFILES:.c=.o)
AR	= ar rc
RM	= rm -f

.c.o:		$(CFILES)
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(AR) $(NAME).a $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
