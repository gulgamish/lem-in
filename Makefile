# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azineddi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/30 23:18:47 by azineddi          #+#    #+#              #
#    Updated: 2020/01/19 18:58:37 by azineddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

srcs_files = srcs/ft_add_cue.c srcs/ft_add_room.c srcs/ft_check_path_flow.c srcs/ft_extract_link_from.c srcs/ft_newgroup.c srcs/ft_paths.c srcs/ft_sendants.c srcs/ft_add_edge.c srcs/ft_extract_path.c srcs/ft_newpath.c srcs/ft_readline.c srcs/ft_sort_paths.c srcs/ft_add_group.c srcs/ft_bfs.c srcs/ft_edge_link_exist.c srcs/ft_newcue.c srcs/ft_newroom.c srcs/ft_search_room.c srcs/main.c srcs/ft_add_path.c srcs/ft_check_forbidden_path.c srcs/ft_exist_edge.c srcs/ft_newedge.c srcs/ft_orchestrate_ants.c srcs/ft_search_room_bystate.c srcs/ft_is_there_path.c srcs/ft_reset.c srcs/ft_reset_edges.c srcs/ft_nbrnodes_paths.c srcs/ft_count_nodes.c srcs/ft_free_group.c srcs/ft_free_edges.c srcs/ft_free_cue.c srcs/ft_free_infos.c srcs/ft_readandfill.c srcs/ft_init_var.c srcs/ft_is_comment.c srcs/ft_extractandfill.c srcs/ft_extract_nbrofants.c srcs/ft_extract_room_info.c srcs/ft_extract_link_info.c srcs/ft_extract_from.c srcs/ft_extract_room_cord.c srcs/ft_extract_room_name.c srcs/ft_isroom.c srcs/ft_str_isdigit.c srcs/ft_extract_command.c srcs/ft_check_extractnbrants.c srcs/ft_del.c srcs/ft_print_graph_info.c srcs/ft_paths_helper.c

objs = $(srcs_files:.c=.o)

headers = includes/lemin.h

lib = libft/libft.a

all : _lib $(NAME) $(lib)

$(NAME) : $(lib) $(objs)
	gcc -Wall -Wextra -Werror -I $(headers) $(lib) $(objs) -o $(NAME)

$(objs): %.o : %.c $(headers)
		gcc -Wall -Wextra -Werror -c $< -o $@ -I includes/

_lib:
	make -C libft/

clean:
	make clean -C libft/
	rm -rf $(objs)

fclean:clean
	make fclean -C libft/
	rm -rf $(NAME)
re : fclean all
