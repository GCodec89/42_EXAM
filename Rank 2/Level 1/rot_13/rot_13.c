/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:00:54 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 14:06:46 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_goleft(char c)
{
	c = c - 13;
	write (1, &c, 1);
}

void	ft_goright(char c)
{
	c = c + 13;
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
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			ft_goright(str[i]);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			ft_goleft(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}