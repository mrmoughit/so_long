/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:47:06 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 16:16:05 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_helper(t_long *tmp, char **s, int i, int j)
{
	if (s[i][j] == 'C')
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass, j * 54, i
			* 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_coin, j * 54, i
			* 54);
	}
	else if (s[i][j] == 'E')
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass, j * 54, i
			* 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_exit, j * 54, i
			* 54);
	}
	else if (s[i][j] == 'P')
	{
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass, j * 54, i
			* 54);
		mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_player, j * 54,
			i * 54);
	}
}

void	ft_set_images(char **s, t_long *tmp)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == '1')
				mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_wall, j
					* 54, i * 54);
			else if (s[i][j] == '0')
				mlx_put_image_to_window(tmp->mlx, tmp->window, tmp->img_grass, j
					* 54, i * 54);
			else
				ft_helper(tmp, s, i, j);
			j++;
		}
		i++;
	}
}
