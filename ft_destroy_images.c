/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_images.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:43:12 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/29 10:05:45 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_destroy_images(t_long *tmp)
{
	if (tmp->img_coin)
		mlx_destroy_image(tmp->mlx, tmp->img_coin);
	if (tmp->img_exit)
		mlx_destroy_image(tmp->mlx, tmp->img_exit);
	if (tmp->img_grass)
		mlx_destroy_image(tmp->mlx, tmp->img_grass);
	if (tmp->img_wall)
		mlx_destroy_image(tmp->mlx, tmp->img_wall);
}
