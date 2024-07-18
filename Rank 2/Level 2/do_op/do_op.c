/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:37:45 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 21:33:33 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
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
	int	n1;
	int	n2;
	int	res;

	if (argc != 4)
	{
		return (write (1, "\n", 1));
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	res = 0;
	if (argv[2][0] == '+')
	{
		res = n1 + n2;
	}
	if (argv[2][0] == '-')
	{
		res = n1 - n2;
	}
	if (argv[2][0] == '*')
	{
		res = n1 * n2;
	}
	if (argv[2][0] == '/')
	{
		res = n1 / n2;
	}
	if (argv[2][0] == '%')
	{
		res = n1 % n2;
	}
	if (res < 0)
	{
		write (1, "-", 1);
		res = -res;
	}
	ft_number(res);
	write (1, "\n", 1);
}
