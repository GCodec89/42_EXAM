/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:56:35 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/22 14:34:22 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_char(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	if (argc < 2)
	{
		return (write (1, "\n", 1));
	}
	i = 1;
	j = 0;
	k = 1;
	while (k < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] != ' ' || argv[i][j] != '\t')
			{
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
				{
					ft_up(argv[i][j]);
				}
				else if ((argv[i][j] >= 'A' && argv[i][j] <= 'Z') && !(argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
				{
					ft_down(argv[i][j]);
				}
				else
				{
					ft_char(argv[i][j]);
				}
			}
			j++;
		}
		k++;
		i++;
		write (1, "\n", 1);
	}
}