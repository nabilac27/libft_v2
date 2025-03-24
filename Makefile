# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 23:49:33 by nchairun          #+#    #+#              #
#    Updated: 2025/03/24 08:36:51 by nchairun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME, COMPILER AND FLAGS
NAME			 =	libft.a

CC				 =	cc
CFLAGS			 =	-Wall -Wextra -Werror


# CREATE STATIC LIBRARY
AR				 =	ar rcs


# LIBFT SOURCE FILES
LIBFT_PREFIX	 =	./libft/

LIBFT_CTYPE_H 	 =	$(addprefix $(LIBFT_PREFIX),	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	\
													ft_isprint.c	ft_tolower.c 	ft_toupper.c)					\
													
LIBFT_STRING_H   =	$(addprefix $(LIBFT_PREFIX),	ft_bzero.c		ft_memchr.c		ft_memcmp.c		ft_memcpy.c		\
													ft_memmove.c	ft_memset.c		ft_strchr.c		ft_strdup.c		\
													ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		ft_strncmp.c	\
													ft_strnstr.c	ft_strrchr.c)									\
													
LIBFT_STDLIB_H	 =	$(addprefix $(LIBFT_PREFIX),	ft_atoi.c		ft_calloc.c)									\

LIBFT_ADD_FUNC	 =	$(addprefix $(LIBFT_PREFIX),	ft_split.c		ft_itoa.c		ft_putchar_fd.c		ft_putendl_fd.c	\
													ft_putnbr_fd.c	ft_putnbr_fd.c	ft_strjoin.c		ft_striteri.c	\
													ft_strmapi.c	ft_strtrim.c	ft_substr.c)						\
													
LIBFT_EXTRA		 =	$(addprefix $(LIBFT_PREFIX),	ft_isspace.c	ft_free_2d.c)										\

# GET_NEXT_LINE SOURCE FILES
GNL_PREFIX		 =	./get_next_line/
GNL_DIR			 =	$(addprefix $(GNL_PREFIX),		get_next_line.c	get_next_line_utils.c)

# FT_PRINTF	SOURCE FILES
FT_PRINTF_PREFIX =	./ft_printf/
FT_PRINTF_DIR	 = $(addprefix $(FT_PRINTF_PREFIX),	ft_printf_digits.c	ft_printf_hex.c	ft_printf_words.c	ft_printf.c)

# ALL SOURCE FILES
SRCS_DIR		 =	$(LIBFT_CTYPE_H)		$(LIBFT_STRING_H)		$(LIBFT_STDLIB_H)	\
					$(LIBFT_ADD_FUNC)		$(LIBFT_EXTRA)								\
					$(GNL_DIR)				$(FT_PRINTF_DIR)

# ALL OBJECT FILES' DIRECTORY
OBJS_DIR		 =	$(SRCS_DIR:./%.c=./build/%.o)


.SILENT:

all: $(NAME)

$(NAME): $(OBJS_DIR)
	$(AR) $(NAME) $^

./build/%.o: ./%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re