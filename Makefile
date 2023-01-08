# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 20:26:36 by smclacke      #+#    #+#                  #
#    Updated: 2023/01/08 15:23:04 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCS = ft_isalpha.c \
    ft_isalnum.c    \
    ft_isascii.c    \
    ft_isdigit.c    \
    ft_isprint.c    \
    ft_strchr.c     \
    ft_strrchr.c    \
    ft_strlen.c     \
    ft_strnstr.c    \
    ft_strncmp.c    \
    ft_strlcat.c    \
    ft_strlcpy.c    \
    ft_atoi.c       \
    ft_bzero.c      \
    ft_memset.c     \
    ft_memcpy.c     \
    ft_memcmp.c     \
    ft_memmove.c    \
    ft_memchr.c     \
    ft_tolower.c    \
    ft_toupper.c    \
    ft_calloc.c     \
    ft_strdup.c     \
    ft_putchar_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c  \
    ft_putstr_fd.c  \
    ft_strjoin.c    \
    ft_substr.c     \
    ft_striteri.c   \
    ft_strtrim.c    \
    ft_strmapi.c    \
    ft_itoa.c       \
    ft_split.c      \
	ft_printf.c     \
	ft_printf_utils.c    \
	get_next_line.c      \
	get_next_line_utils.c

BONUS = ft_lstadd_back_bonus.c  \
        ft_lstadd_front_bonus.c \
        ft_lstclear_bonus.c     \
        ft_lstdelone_bonus.c    \
        ft_lstiter_bonus.c      \
        ft_lstlast_bonus.c      \
        ft_lstmap_bonus.c       \
        ft_lstnew_bonus.c       \
        ft_lstsize_bonus.c

OBJS = $(SRCS:%.c=%.o)
BONUS_OBJS = $(BONUS:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARCHIVE = ar rcs
RM = rm -f

ifdef ADDBONUS
	ALL = $(OBJS) $(BONUS_OBJS)
	else
	ALL = $(OBJS)
endif

all: $(NAME)

$(NAME): $(ALL)
	@ $(ARCHIVE) $(NAME) $(ALL)
	@ echo "Made!"

%.o: %.c $(HEADER)
	@ $(CC) -c $(CFLAGS) -o $@ $<

clean:
	@ $(RM) $(OBJS) $(BONUS_OBJS)
	@ echo "Clean!"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "fCleaned!"

re: fclean all

bonus:
	@ make ADDBONUS=1 all
	@ echo "Bonus or everything + bonus"

.PHONY: all clean make fclean re bonus