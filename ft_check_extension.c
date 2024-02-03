/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:19:28 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 16:16:28 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_extension(char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (i < 3)
		return (0);
	if (s[i] == 'r' && s[i - 1] == 'e' && s[i - 2] == 'b' && s[i - 3] == '.')
		return (1);
	return (0);
}
