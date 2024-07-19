/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:13:50 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 13:28:08 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

	if (argc == 1)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	n = 0;
	while (str[i] != '\0')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	i = 1;
	res = 0;
	while (i < 10)
	{
		ft_number(i);
		write (1, " x ", 3);
		ft_number(n);
		write (1, " = ", 3);
		res = n * i;
		ft_number(res);
		write (1, "\n", 1);
		i++;
	}
}
