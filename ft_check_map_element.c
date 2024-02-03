/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:30:40 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:34:09 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static t_parsing	ft_set_num(void)
{
	t_parsing	p;

	p.collectible = 0;
	p.exit = 0;
	p.player = 0;
	return (p);
}

static int	ft_helper(t_parsing *p)
{
	if (p->collectible < 1)
		return (0);
	if (p->exit != 1)
		return (0);
	if (p->player != 1)
		return (0);
	return (1);
}

static void	ft_helper1(char c, t_parsing *p)
{
	if (c == 'P')
		p->player += 1;
	else if (c == 'C')
		p->collectible += 1;
	else if (c == 'E')
		p->exit += 1;
}

int	ft_check_map_element(char **s)
{
	t_parsing	p;
	int			i;
	int			j;

	p = ft_set_num();
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			ft_helper1(s[i][j], &p);
			if (s[i][j] != '1' && s[i][j] != '0' && s[i][j] != 'C'
				&& s[i][j] != 'E' && s[i][j] != 'P')
				return (0);
			j++;
		}
		i++;
	}
	if (ft_helper(&p))
		return (1);
	return (0);
}
