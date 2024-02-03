/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_key.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:45:14 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 11:46:20 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_helper(t_long *tmp)
{
	mlx_destroy_window(tmp->mlx, tmp->window);
	exit(0);
}

int	ft_check_key(int key_code, void *tmp)
{
	t_long		*var;
	static int	count;
	int			i;

	i = count;
	var = (t_long *)tmp;
	if (key_code == 124)
		ft_right(var, &count);
	else if (key_code == 126)
		ft_up(var, &count);
	else if (key_code == 123)
		ft_left(var, &count);
	else if (key_code == 125)
		ft_down(var, &count);
	else if (key_code == 53)
		ft_helper(var);
	if (i != count)
	{
		ft_putnbr(count);
		write(1, "\n", 1);
	}
	return (0);
}
