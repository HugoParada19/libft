NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
ft_memcpy.c  ft_memmove.c  ft_memset.c  ft_strlcat.c  ft_strlcpy.c  ft_strlen.c

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

all: $(NAME) clean

$(NAME): $(OBJS)
	ar src $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
