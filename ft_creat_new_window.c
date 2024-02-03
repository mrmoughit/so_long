/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_new_window.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:46:14 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 16:57:07 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_close_game(void *tmp)
{
	t_long	*p;

	p = (t_long *)tmp;
	mlx_destroy_window(p->mlx, p->window);
	exit(0);
}

void	ft_creat_new_window(char **s)
{
	t_long	tmp;
	int		i;

	i = 0;
	tmp.mlx = mlx_init();
	if (!tmp.mlx)
		ft_print_error(10);
	while (s[i])
		i++;
	tmp.window = mlx_new_window(tmp.mlx, ft_strlen(s[i - 1]) * 54, i * 54,
			"so_long");
	if (!tmp.window)
		ft_print_error(10);
	ft_set_element(&tmp);
	ft_set_images(s, &tmp);
	tmp.map.map = s;
	mlx_hook(tmp.window, 2, 0, ft_check_key, &tmp);
	mlx_hook(tmp.window, 17, 0, ft_close_game, &tmp);
	mlx_loop(tmp.mlx);
}
