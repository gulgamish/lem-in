#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelamran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 15:38:40 by aelamran          #+#    #+#              #
#    Updated: 2020/01/16 15:38:27 by azineddi         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a

srcs_files =ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lst_addlast.c ft_lstadd.c ft_lstcount.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c get_next_line.c ft_clonemap.c ft_countlines.c ft_freetab.c ft_pow.c

headers = libft.h

objs_dir = objs


objs = $(addprefix $(objs_dir)/,$(srcs_files:.c=.o))

all: $(NAME)

$(NAME) : $(objs)
		ar rc $(NAME) $(objs)

$(objs): $(objs_dir)/%.o : %.c $(headers) | $(objs_dir)
		gcc -Wall -Wextra -Werror -c $< -o $@

$(objs_dir):
	mkdir $(objs_dir)

clean:
	rm -rf $(objs)

fclean:clean
	rm -rf $(NAME)

re : fclean all
