/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:27:47 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 18:01:28 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str, char c, int n)
{
	while (n >= 0)
	{
		if (str[n] == c)
		{
			return (0);
		}
		n--;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		j;

	if (argc != 3)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (str[i] == argv[2][j])
			{
				if (ft_check(str, str[i], i - 1))
					write(1, &str[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
}
