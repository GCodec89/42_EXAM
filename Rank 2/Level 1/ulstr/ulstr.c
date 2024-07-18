/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:21:02 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 21:31:47 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_down(char c)
{
	c = c + 32;
	write (1, &c, 1);
}

void	ft_up(char c)
{
	c = c - 32;
	write (1, &c, 1);
}

void	ft_char(char c)
{
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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_up(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_down(str[i]);
		}
		else
		{
			ft_char(str[i]);
		}
		i++;
	}
	write (1, "\n", 1);
}
