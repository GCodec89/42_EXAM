/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:27:00 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 21:34:59 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	fizz(int n)
{
	write (1, "fizz", 4);
}

void	buzz(int n)
{
	write (1, "buzz", 4);
}

void	fizzbuzz(int n)
{
	write (1, "fizzbuzz", 8);
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

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			fizzbuzz(i);
		}
		else if (i % 3 == 0)
		{
			fizz(i);
		}
		else if (i % 5 == 0)
		{
			buzz(i);
		}
		else if (i > 9)
		{
			ft_number(i);
		}
		else
		{
			ft_char(i);
		}
		write (1, "\n", 1);
		i++;
	}
}
