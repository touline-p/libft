NAME	=	libft.a

HEADER	=	./includes/

OBJDIR	=	./obj/

CC	=	gcc

CFLAGS	=	-Werror -Wall -Wextra -g

AR	= 	ar

ARFLAGS =	rcs

SANITY	=	-fsanitize=address

FILES	=	ft_strlcat.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_striteri.c \
		ft_toupper.c \
		ft_strlcpy.c \
		ft_strmapi.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_split.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strdup.c \
		ft_memmove.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memset.c \
		ft_lstiter.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstadd_front.c \
		ft_lstmap.c \
		ft_lstclear.c \
		ft_lstlast.c \
		ft_lstsize.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_itoa.c \
		ft_atoi.c \
		ft_memccpy.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \

ODIR	=	obj/

SDIR	=	src/

SRCS	=	$(addprefix $(SDIR), $(FILES))

OBJS	=	$(addprefix $(ODIR), $(FILES:.c=.o))

all	:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) 
	ranlib $(NAME)

obj/%.o	:	src/%.c
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm $(NAME)

re	:	fclean all

ncpy	:	all
	cp $(NAME) ~/lib/
	cp $(HEADER)libft.h ~/lib/libft.h

.PHONY	:	all clean fclean re ncpy
