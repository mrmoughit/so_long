/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_is_close.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:59:36 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 16:22:13 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_helper(char **s, int i)
{
	int	j;

	j = 0;
	while (s[i])
	{
		while (s[i][j])
		{
			if (s[i][j] != '1')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_map_is_close(char **s)
{
	int	i;
	int	j;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (j == 0 && s[i][j] != '1')
				return (0);
			if (s[i][j + 1] == '\0' && s[i][j] != '1')
				return (0);
			if (i == 0 && s[i][j] != '1')
				return (0);
			j++;
		}
		i++;
	}
	if (!ft_helper(s, i - 1))
		return (0);
	return (1);
}
