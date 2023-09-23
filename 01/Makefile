NAME = libft.a


RM = rm -f


CC = gcc


CFLAGS = -Wall -Wextra -Werror

SRCs = ft_isalnum.c	\
	   ft_isalpha.c	\
	   ft_isdigit.c	\
	   ft_isascii.c	\
	   ft_isprint.c	\
	   ft_strlen.c	\
	   ft_memset.c	\
	   ft_bzero.c	\
	   ft_toupper.c	\
	   ft_tolower.c	\
	   ft_memcpy.c	\
	   ft_memmove.c	\
	   ft_strlcpy.c	\
	   ft_strchr.c	\
	   ft_strrchr.c	\
	   ft_strlcat.c	\
	   ft_atoi.c	\
	   ft_strncmp.c	\

OBJs = $(SRCs:.c=.o)

all : $(NAME)

$(NAME) : $(OBJs)
	ar rcs $(NAME) $(OBJs)

$.o : %.c
	$(cc) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJs)

fclean : clean
	$(RM) $(NAME)

re : fclean all
