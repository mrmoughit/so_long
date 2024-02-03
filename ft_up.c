/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:40:39 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:07:26 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	helper(t_long *tmp)
{
	write(1, "YOU WIN ^_^\n", 12);
	mlx_destroy_window(tmp->mlx, tmp->window);
	exit(0);
}

void	ft_up(t_long *tmp, int *i)
{
	ft_get_position(tmp);
	if (tmp->map.map[tmp->player.x - 1][tmp->player.y] == '0')
	{
		ft_swap(&tmp->map.map[tmp->player.x - 1][tmp->player.y],
			&tmp->map.map[tmp->player.x][tmp->player.y]);
		(*i)++;
		fun(tmp, 4);
	}
	else if (tmp->map.map[tmp->player.x - 1][tmp->player.y] == 'C')
	{
		tmp->map.map[tmp->player.x - 1][tmp->player.y] = '0';
		ft_swap(&tmp->map.map[tmp->player.x - 1][tmp->player.y],
			&tmp->map.map[tmp->player.x][tmp->player.y]);
		(*i)++;
		fun(tmp, 4);
	}
	else if (tmp->map.map[tmp->player.x - 1][tmp->player.y] == 'E'
			&& ft_find_col(tmp->map.map))
	{
		fun(tmp, 4);
		(*i)++;
	}
	else if (tmp->map.map[tmp->player.x - 1][tmp->player.y] == 'E')
		helper(tmp);
}
