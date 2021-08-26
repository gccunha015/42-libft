NAME	= libft.a
CC	= clang
CFLAGS	= -Wall -Wextra -Werror
CFILES	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c
OBJS	= $(CFILES:.c=.o)
AR	= ar rcs
RM	= rm -f

.c.o:		$(CFILES)
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME) clean

$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
