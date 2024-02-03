/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:11:18 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 17:21:54 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_find_exit(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == 'E')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	case1(t_long *p)
{
	if (!ft_find_exit(p->map.map))
		ft_helper_flag1(p, 1);
	else if (p->map.map[p->player.x][p->player.y + 1] == 'E')
		ft_helper_flag1(p, 0);
	else
	{
		mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
			* 54, p->player.x * 54);
		mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
			* 54 + 54, p->player.x * 54);
		mlx_put_image_to_window(p->mlx, p->window, p->img_player, p->player.y
			* 54 + 54, p->player.x * 54);
	}
}

static void	case2(t_long *p)
{
	if (!ft_find_exit(p->map.map))
		ft_helper_flag2(p, 1);
	else if (p->map.map[p->player.x][p->player.y - 1] == 'E')
		ft_helper_flag2(p, 0);
	else
	{
		mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
			* 54, p->player.x * 54);
		mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
			* 54 - 54, p->player.x * 54);
		mlx_put_image_to_window(p->mlx, p->window, p->img_player, p->player.y
			* 54 - 54, p->player.x * 54);
	}
}

static void	case3(t_long *p)
{
	if (!ft_find_exit(p->map.map))
		ft_helper_flag3(p, 1);
	else if (p->map.map[p->player.x + 1][p->player.y] == 'E')
		ft_helper_flag3(p, 0);
	else
	{
		mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
			* 54, p->player.x * 54);
		mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
			* 54, p->player.x * 54 + 54);
		mlx_put_image_to_window(p->mlx, p->window, p->img_player, p->player.y
			* 54, p->player.x * 54 + 54);
	}
}

void	fun(t_long *p, int flag)
{
	if (flag == 1)
		case1(p);
	else if (flag == 2)
		case2(p);
	else if (flag == 3)
		case3(p);
	else if (flag == 4)
	{
		if (!ft_find_exit(p->map.map))
			ft_helper_flag4(p, 1);
		else if (p->map.map[p->player.x - 1][p->player.y] == 'E')
			ft_helper_flag4(p, 0);
		else
		{
			mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
				* 54, p->player.x * 54);
			mlx_put_image_to_window(p->mlx, p->window, p->img_grass, p->player.y
				* 54, p->player.x * 54 - 54);
			mlx_put_image_to_window(p->mlx, p->window, p->img_player,
				p->player.y * 54, p->player.x * 54 - 54);
		}
	}
}
