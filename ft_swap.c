/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:05:23 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/30 10:20:34 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_position(t_long *tmp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tmp->map.map[i])
	{
		j = 0;
		while (tmp->map.map[i][j])
		{
			if (tmp->map.map[i][j] == 'P')
			{
				tmp->player.x = i;
				tmp->player.y = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_swap(char *c, char *s)
{
	char	tmp;

	tmp = *c;
	*c = *s;
	*s = tmp;
}
