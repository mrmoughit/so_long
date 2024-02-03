/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:44:16 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 17:46:12 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_set_element(t_long *tmp)
{
	tmp->height = 54;
	tmp->whith = 54;
	tmp->img_coin = mlx_xpm_file_to_image(tmp->mlx, "textures/coin.xpm",
			&tmp->height, &tmp->whith);
	tmp->img_grass = mlx_xpm_file_to_image(tmp->mlx, "textures/grass.xpm",
			&tmp->height, &tmp->whith);
	tmp->img_exit = mlx_xpm_file_to_image(tmp->mlx, "textures/exit.xpm",
			&tmp->height, &tmp->whith);
	tmp->img_wall = mlx_xpm_file_to_image(tmp->mlx, "textures/wall.xpm",
			&tmp->height, &tmp->whith);
	tmp->img_player = mlx_xpm_file_to_image(tmp->mlx, "textures/player.xpm",
			&tmp->height, &tmp->whith);
	if (!tmp->img_coin || !tmp->img_exit || !tmp->img_grass || !tmp->img_player
		|| !tmp->img_wall)
	{
		mlx_destroy_window(tmp->mlx, tmp->window);
		ft_print_error(6);
	}
}
