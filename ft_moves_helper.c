/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:05:55 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:22:23 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_helper_flag1(t_long *tmp, int flag)
{
	if (flag == 0)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54 + 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54 + 54, tmp->player.x * 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = '0';
		tmp->map.map[tmp->player.x][tmp->player.y + 1] = 'P';
	}
	else if (flag == 1)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54 + 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54 + 54, tmp->player.x * 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = 'E';
		tmp->map.map[tmp->player.x][tmp->player.y + 1] = 'P';
	}
}

void	ft_helper_flag2(t_long *tmp, int flag)
{
	if (flag == 0)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54 - 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54 - 54, tmp->player.x * 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = '0';
		tmp->map.map[tmp->player.x][tmp->player.y - 1] = 'P';
	}
	else if (flag == 1)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54 - 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54 - 54, tmp->player.x * 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = 'E';
		tmp->map.map[tmp->player.x][tmp->player.y - 1] = 'P';
	}
}

void	ft_helper_flag3(t_long *tmp, int flag)
{
	if (flag == 0)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54, tmp->player.x * 54 + 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54, tmp->player.x * 54 + 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = '0';
		tmp->map.map[tmp->player.x + 1][tmp->player.y] = 'P';
	}
	else if (flag == 1)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54 + 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54, tmp->player.x * 54 + 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = 'E';
		tmp->map.map[tmp->player.x + 1][tmp->player.y] = 'P';
	}
}

void	ft_helper_flag4(t_long *tmp, int flag)
{
	if (flag == 0)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54 - 1);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54, tmp->player.x * 54 - 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54, tmp->player.x * 54 - 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = '0';
		tmp->map.map[tmp->player.x - 1][tmp->player.y] = 'P';
	}
	else if (flag == 1)
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54 - 1);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit,
			tmp->player.y * 54, tmp->player.x * 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass,
			tmp->player.y * 54, tmp->player.x * 54 - 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player,
			tmp->player.y * 54, tmp->player.x * 54 - 54);
		tmp->map.map[tmp->player.x][tmp->player.y] = 'E';
		tmp->map.map[tmp->player.x - 1][tmp->player.y] = 'P';
	}
}
