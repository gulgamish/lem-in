/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:08:06 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/20 10:44:29 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft.h"
# define NONE 0
# define START 1
# define END 2

typedef	struct		s_character
{
	char			c;
}					t_character;

typedef	struct		s_cord
{
	int				x;
	int				y;
}					t_cord;

typedef	struct		s_room
{
	char			*name;
	t_cord			*cord;
	int				state;
	t_list			*links;
	struct s_room	*previous;
	int				visited;
	int				blocked;
	int				flow;
	int				ants;
	struct s_room	*left;
	struct s_room	*right;
}					t_room;

typedef	struct		s_edge
{
	t_room			*from;
	t_room			*to;
	int				flow;
	int				visited;
	struct s_edge	*next;
}					t_edge;

typedef struct		s_infos
{
	int				end;
	int				start;
	int				check_links;
	long			nb_of_ants;
	t_room			*start_room;
	t_room			*end_room;
	t_room			*rooms;
}					t_infos;

typedef	struct		s_path
{
	t_room			*room;
	struct s_path	*next;
}					t_path;

typedef struct		s_groups
{
	t_path			*path;
	int				node_nbr;
	int				nbr_ants;
	struct s_groups *next;
}					t_groups;

typedef	struct		s_var
{
	int				i;
	int				j;
	int				swapped;
}					t_var;

typedef struct		s_cue
{
	t_room			*room;
	struct s_cue	*next;
}					t_cue;

typedef	struct		s_ant
{
	t_path			*path;
}					t_ant;

t_room				*ft_bfs(t_cue *cue, t_edge **edge);
void				ft_free_cue(t_cue *cue);
char				*ft_readline(void);
t_room				*ft_newroom(char *name, t_cord *cord, int state);
t_cue				*ft_newcue(t_room *room);
void				ft_add_cue(t_cue **head, t_cue *newcue);
t_ant				*ft_newant(int id, t_room *room);
void				ft_add_room(t_room **head, t_room *newroom);
t_path				*ft_newpath(t_room *room);
void				ft_add_path(t_path **head, t_path *newpath);
t_groups			*ft_newgroup(t_path *path, int node_nbr);
void				ft_add_group(t_groups **head, t_groups *newgroup);
t_room				*ft_search_room(char *tofind, t_room *head);
t_room				*ft_search_room_bystate(int state, t_room *head);
void				ft_paths(t_infos *infos);
t_edge				*ft_newedge(t_room *from, t_room *to, int flow);
void				ft_add_edge(t_edge **edges, t_edge *newedge);
t_room				*ft_edge_link_exist(t_edge *edge, t_room *from);
t_room				*ft_extract_link_from(t_edge *edge, t_room *to);
t_edge				*ft_exist_edge(t_edge *edge, t_room *from, t_room *to);
int					ft_check_forbiden_path(
					t_edge *edge, t_room *from, t_room *to);
int					ft_check_path_flow(t_edge *edge, t_room *from, t_room *to);
int					ft_extract_path(t_room *room, t_edge *edge, t_path **path);
void				ft_sort_paths(t_groups **groups, int count);
void				ft_sendants(t_groups *groups_solve, t_infos *infos);
void				ft_orchestrate_ants(t_groups *groups_solve, t_infos *infos);
int					ft_is_there_path(t_room *start);
void				ft_reset(t_room *room);
void				ft_reset_edges(t_edge *edge);
int					ft_nbrnodes_paths(t_groups *group);
int					ft_count_nodes(t_path *path);
void				ft_free_group(t_groups *group);
void				ft_free_edges(t_edge *edge);
void				ft_free_infos(t_infos *infos);
int					ft_check_extractnbrants(char *line, t_infos *infos);
void				ft_extract_command(char *line, int *state, t_infos *infos);
int					ft_str_isdigit(char *str);
int					ft_isroom(char *line);
char				*ft_extract_room_name(char **line);
t_cord				*ft_extract_room_cord(char *line);
char				*ft_extract_from(char **line);
int					ft_extract_link_info(t_infos *infos, char *line);
int					ft_extract_room_info(t_infos *infos, int state, char *line);
int					ft_extract_nbrofants(t_infos *infos, char *line);
int					ft_extractandfill(t_infos *infos, char *line, int *state);
int					ft_is_comment(char *line);
void				ft_init_var(t_infos *infos, char **line, int *state);
int					ft_readandfill(t_infos *infos);
int					ft_del(void *content, size_t content_size);
void				ft_print_graph_info(t_list *buff);
int					ft_getline(int fd, char **line);
void				ft_run_bfs(t_infos *infos, t_edge **edge);
void				init_path_var(t_groups **groups_solve
					, t_edge **edge, int *score_prev);
void				ft_paths_norme(t_groups **groups_solve
					, t_infos **infos, t_edge **edge);
#endif
