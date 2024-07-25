/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:50:27 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/25 09:39:13 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	ft_up(char c)
{
	c = c - 32;
	write (1, &c, 1);
}

void	ft_down(char c)
{
	c = c + 32;
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
	{
		return (write (1, "\n", 1));
	}
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		if (j == 0 && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
		{
			ft_up(argv[i][j]);
			j++;
		}
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] != '\0' && ((argv[i][j - 1] == '\t') || (argv[i][j - 1] == ' ')) && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
			{
				ft_up(argv[i][j]);
			}
			else if (argv[i][j] != '\0' && (argv[i][j] >= 'A' && argv[i][j] <= 'Z') && (!((argv[i][j - 1] == '\t') || (argv[i][j - 1] == ' '))))
			{
				ft_down(argv[i][j]);
			}
			else
			{
				ft_char(argv[i][j]);
			}
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
