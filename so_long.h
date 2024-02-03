/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:02 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:25:13 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 1337

typedef struct s_dem
{
	int			length;
	int			width;
}				t_dem;

typedef struct s_player
{
	int			x;
	int			y;
}				t_player;

typedef struct s_parsing
{
	int			player;
	int			collectible;
	int			exit;
}				t_parsing;

typedef struct s_map
{
	char		**map;
}				t_map;

typedef struct s_long
{
	t_player	player;
	t_map		map;
	void		*window;
	void		*mlx;
	void		*img_wall;
	void		*img_coin;
	void		*img_grass;
	void		*img_player;
	void		*img_exit;
	int			whith;
	int			height;
}				t_long;

void			ft_left(t_long *tmp, int *i);
void			ft_up(t_long *tmp, int *i);
void			ft_destroy_images(t_long *tmp);
int				ft_check_map_element(char **s);
void			ft_set_element(t_long *tmp);
void			ft_get_position(t_long *tmp);
void			ft_putnbr(int nbr);
void			ft_right(t_long *tmp, int *i);
void			ft_down(t_long *tmp, int *i);
int				ft_strlen(const char *s);
void			ft_free(char **s);
void			ft_down(t_long *tmp, int *i);
void			ft_get_position(t_long *tmp);
int				ft_check_key(int key_code, void *tmp);
void			ft_swap(char *c, char *s);
int				ft_strlen_map(char *s);
int				ft_map_is_close(char **s);
int				ft_is_rectangle(char *s);
void			ft_set_images(char **s, t_long *tmp);
int				ft_check_map_element(char **s);
char			*ft_strjoin(char *s1, char *s2);
int				ft_check_extension(char *s);
char			**ft_split(char const *s, char c);
char			**ft_parsing(char *av);
char			*ft_strdup(char *s1);
char			*get_next_line(int fd);
int				ft_is_rectangle(char *s);
void			ft_print_error(int flag);
int				ft_find_nl(const char *s, int c);
void			ft_putnbr(int nbr);
void			ft_creat_new_window(char **s);
void			ft_helper_flag1(t_long *tmp, int flag);
void			ft_helper_flag2(t_long *tmp, int flag);
void			ft_helper_flag3(t_long *tmp, int flag);
void			ft_helper_flag4(t_long *tmp, int flag);
int				ft_find_col(char **s);
void			fun(t_long *p, int flag);

#endif
