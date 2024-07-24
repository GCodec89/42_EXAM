/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:20:25 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/24 13:39:54 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;

	if (argc != 3)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	j = 0;
	while (argv[2][j] != '\0')
	{
		if (argv[1][i] == argv[2][j])
		{
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	k = 0;
	while (argv[1][k] != '\0')
	{
		k++;
	}
	if (i != k)
	{
		return (write (1, "\n", 1));
	}
	else
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
