/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:05 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 17:40:40 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] != '1' && s[i][j] != 'H' && s[i][j] != '0')
			{
				ft_free(s);
				ft_print_error(7);
			}
			j++;
		}
		i++;
	}
}

static char	*ft_strcpy(char **s, char *copy, int i)
{
	int	j;

	j = 0;
	while (s[i][j])
	{
		copy[j] = s[i][j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

static char	**ft_copy(char **s)
{
	int		len;
	int		i;
	char	**copy;

	i = 0;
	while (s[i])
		i++;
	len = ft_strlen(s[i - 1]);
	copy = (char **)malloc(sizeof(char *) * i + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = malloc(sizeof(char *) * len + 1);
		if (!copy[i])
			return (NULL);
		copy[i] = ft_strcpy(s, copy[i], i);
		i++;
	}
	return (copy[i] = 0, copy);
}

void	ft_flood_fill(char **s, int x, int y, t_dem d)
{
	if (x < 0 || y < 0 || x > d.length || y > d.width || s[x][y] == '1'
		|| s[x][y] == 'H')
		return ;
	s[x][y] = 'H';
	ft_flood_fill(s, x + 1, y, d);
	ft_flood_fill(s, x - 1, y, d);
	ft_flood_fill(s, x, y + 1, d);
	ft_flood_fill(s, x, y - 1, d);
}

int	main(int ac, char **av)
{
	t_long	tmp;
	t_dem	d;
	int		i;
	char	**copy;

	i = 0;
	if (ac != 2)
		ft_print_error(1);
	if (!ft_check_extension(av[1]))
		ft_print_error(2);
	tmp.map.map = ft_parsing(av[1]);
	while (tmp.map.map[i])
		i++;
	d.length = i;
	d.width = ft_strlen(tmp.map.map[i - 1]);
	ft_get_position(&tmp);
	copy = ft_copy(tmp.map.map);
	ft_flood_fill(copy, tmp.player.x, tmp.player.y, d);
	ft_check_map(copy);
	ft_free(copy);
	ft_creat_new_window(tmp.map.map);
	return (0);
}
