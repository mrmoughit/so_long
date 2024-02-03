/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:16:46 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/31 17:02:50 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_error(int flag)
{
	if (flag == 1)
		write(2, "Error\nthe number f arguments not valid\n", 39);
	else if (flag == -1)
		write(2, "Error\nthe file can't be open\n", 29);
	else if (flag == 2)
		write(2, "Error\nin the file extension\n", 28);
	else if (flag == 3)
		write(2, "Error\nmap not rectangle\n", 24);
	else if (flag == 4)
		write(2, "Error\nmap not closed\n", 21);
	else if (flag == 5)
		write(2, "Error\nmap element\n", 18);
	else if (flag == 6)
		write(2, "Error\nxpm file not valid\n", 25);
	else if (flag == 7)
		write(2, "Error\ngame not playbale\n", 24);
	else if (flag == 0)
		write(2, "Error\nmap not valid\n", 20);
	else if (flag == 10)
		write(2, "Error\none of mlx_functios fail\n", 31);
	else if (flag == -2)
		write(1, "Error\nthe map is empty\n", 23);
	exit(1);
}
