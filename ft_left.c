/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:41:59 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:05:15 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	helper(t_long *tmp)
{
	write(1, "YOU WIN ^_^\n", 12);
	mlx_destroy_window(tmp->mlx, tmp->window);
	exit(0);
}

void	ft_left(t_long *tmp, int *i)
{
	ft_get_position(tmp);
	if (tmp->map.map[tmp->player.x][tmp->player.y - 1] == '0')
	{
		ft_swap(&tmp->map.map[tmp->player.x][tmp->player.y],
			&tmp->map.map[tmp->player.x][tmp->player.y - 1]);
		(*i)++;
		fun(tmp, 2);
	}
	else if (tmp->map.map[tmp->player.x][tmp->player.y - 1] == 'C')
	{
		tmp->map.map[tmp->player.x][tmp->player.y - 1] = '0';
		ft_swap(&tmp->map.map[tmp->player.x][tmp->player.y],
			&tmp->map.map[tmp->player.x][tmp->player.y - 1]);
		(*i)++;
		fun(tmp, 2);
	}
	else if (tmp->map.map[tmp->player.x][tmp->player.y - 1] == 'E'
			&& ft_find_col(tmp->map.map))
	{
		fun(tmp, 2);
		(*i)++;
	}
	else if (tmp->map.map[tmp->player.x][tmp->player.y - 1] == 'E')
		helper(tmp);
}
