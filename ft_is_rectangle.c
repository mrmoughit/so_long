/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_rectangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:35:23 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 12:41:06 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen_map(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

int	ft_is_rectangle(char *s)
{
	int		fd;
	char	*line;
	char	*line1;

	fd = open(s, O_RDONLY);
	if (fd == -1)
		ft_print_error(-1);
	line = get_next_line(fd);
	line1 = ft_strdup(line);
	while (1)
	{
		free(line);
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		if (ft_strlen_map(line) != ft_strlen_map(line1))
			return (close(fd), free(line), free(line1), 0);
		free(line1);
		line1 = ft_strdup(line);
	}
	return (close(fd), free(line1), 1);
}
