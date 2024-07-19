/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:20:51 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 14:43:05 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_prime(int i)
{
	int	j;

	j = 2;
	while (j < i)
	{
		if (i % j == 0)
		{
			return (0);
		}
		j++;
	}
	return (i);
}

void	ft_char(int n)
{
	char	c;

	c = n + '0';
	write (1, &c, 1);
}

void	ft_number(int n)
{
	if (n > 9)
	{
		ft_number(n / 10);
	}
	ft_char(n % 10);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		n;
	int		res;
	char	*str;

	if (argc != 2)
	{
		return (write (1, "0\n", 2));
	}
	i = 0;
	str = &argv[1][i];
	n = 0;
	while (str[i] != '\0')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	if (n <= 1)
	{
		return (write (1, "0\n", 2));
	}
	if (n == 2)
	{
		return (write (1, "2\n", 2));
	}
	i = 2;
	res = 0;
	while (i <= n)
	{
		res = res + ft_prime(i);
		i++;
	}
	ft_number(res);
	write (1, "\n", 1);
}
