/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:49:34 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 12:03:08 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_right_small(char c)
{
	int	i;

	i = 0;
	while (c > 'a')
	{
		c--;
		i++;
	}
	c = 'z' - i;
	write (1, &c, 1);
}

void	ft_right_big(char c)
{
	int	i;

	i = 0;
	while (c > 'A')
	{
		c--;
		i++;
	}
	c = 'Z' - i;
	write (1, &c, 1);
}

void	ft_left_small(char c)
{
	int	i;

	i = 0;
	while (c < 'z')
	{
		c++;
		i++;
	}
	c = 'a' + i;
	write (1, &c, 1);
}

void	ft_left_big(char c)
{
	int	i;

	i = 0;
	while (c < 'Z')
	{
		c++;
		i++;
	}
	c = 'A' + i;
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	if (argc != 2)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			ft_right_small(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'M')
		{
			ft_right_big(str[i]);
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			ft_left_small(str[i]);
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			ft_left_big(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}