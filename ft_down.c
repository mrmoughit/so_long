/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:41:19 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:08:24 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	helper(t_long *tmp)
{
	write(1, "YOU WIN ^_^\n", 12);
	mlx_destroy_window(tmp->mlx, tmp->window);
	exit(0);
}

void	ft_down(t_long *tmp, int *i)
{
	ft_get_position(tmp);
	if (tmp->map.map[tmp->player.x + 1][tmp->player.y] == '0')
	{
		ft_swap(&tmp->map.map[tmp->player.x + 1][tmp->player.y],
			&tmp->map.map[tmp->player.x][tmp->player.y]);
		(*i)++;
		fun(tmp, 3);
	}
	else if (tmp->map.map[tmp->player.x + 1][tmp->player.y] == 'C')
	{
		tmp->map.map[tmp->player.x + 1][tmp->player.y] = '0';
		ft_swap(&tmp->map.map[tmp->player.x + 1][tmp->player.y],
			&tmp->map.map[tmp->player.x][tmp->player.y]);
		(*i)++;
		fun(tmp, 3);
	}
	else if (tmp->map.map[tmp->player.x + 1][tmp->player.y] == 'E'
			&& ft_find_col(tmp->map.map))
	{
		fun(tmp, 3);
		(*i)++;
	}
	else if (tmp->map.map[tmp->player.x + 1][tmp->player.y] == 'E')
		helper(tmp);
}
