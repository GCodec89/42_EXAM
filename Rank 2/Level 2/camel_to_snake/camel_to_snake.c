/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:06:41 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 13:12:43 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_down(char c)
{
	c = c + 32;
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
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write (1, "_", 1);
			ft_down(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}
