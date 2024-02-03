/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:12:51 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 16:29:54 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_helper(char **s, int fd)
{
	if (!ft_map_is_close(s))
	{
		close(fd);
		ft_free(s);
		ft_print_error(4);
	}
	if (!ft_check_map_element(s))
	{
		close(fd);
		ft_free(s);
		ft_print_error(5);
	}
}

static void	ft_check_last_char(char *r)
{
	int	i;

	i = 0;
	while (r[i])
		i++;
	if (r[i - 1] && r[i - 1] != '1')
	{
		free(r);
		ft_print_error(0);
	}
}

static void	ft_help(char *line)
{
	if (!ft_strlen(line))
		ft_print_error(-2);
}

char	**ft_parsing(char *av)
{
	char	*ar;
	char	*line;
	char	**s;
	int		fd;

	ar = NULL;
	line = NULL;
	fd = open(av, O_RDONLY);
	if (fd == -1)
		ft_print_error(-1);
	if (!ft_is_rectangle(av))
		ft_print_error(3);
	line = get_next_line(fd);
	ft_help(line);
	while (line)
	{
		ar = ft_strjoin(ar, line);
		free(line);
		line = get_next_line(fd);
	}
	ft_check_last_char(ar);
	s = ft_split(ar, '\n');
	free(ar);
	ft_helper(s, fd);
	return (close(fd), s);
}
