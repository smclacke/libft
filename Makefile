# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/03/04 20:06:02 by smclacke      #+#    #+#                  #
#    Updated: 2023/03/04 23:09:04 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c			\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strlen.c			\
		ft_strnstr.c		\
		ft_strncmp.c		\
		ft_strlcat.c		\
		ft_strlcpy.c		\
		ft_atoi.c			\
		ft_bzero.c			\
		ft_memset.c			\
		ft_memcpy.c			\
		ft_memcmp.c			\
		ft_memmove.c		\
		ft_memchr.c			\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_putchar_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_putstr_fd.c		\
		ft_strjoin.c		\
		ft_substr.c			\
		ft_striteri.c		\
		ft_strtrim.c		\
		ft_strmapi.c		\
		ft_itoa.c			\
		ft_split.c			\
		ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_lstsize.c		\
		ft_atof.c			\
		ft_ishex.c			\
		ft_isspace.c		\
		ft_strcmp.c



OBJ_DIR		= obj/
OBJS 		= $(SRCS:.c=.o)
OBJ 		= $(addprefix $(OBJ_DIR), $(OBJS))

ALL = $(OBJS)

all: $(NAME)


$(NAME):  $(OBJ_DIR) $(ALL) $(HEADER)
	ar rcs $(NAME) $(OBJS)
	@ echo "Made!"

$(OBJ_DIR)%.o: $(SRCS)%.c $(HEADER)
	@$(CC) $(CFLAGS) $(HEADER) -c -o $@ $<

$(OBJ_DIR):
	@ mkdir -p obj

clean:
	@ rm -rf $(OBJS) $(OBJ_DIR)
	@ echo "Clean!"

fclean: clean
	@ rm -f $(NAME)
	@ echo "fCleaned!"

re: fclean all

.PHONY: all clean make fclean re 