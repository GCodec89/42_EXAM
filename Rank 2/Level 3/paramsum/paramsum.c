/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:06:44 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 21:35:52 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	i;

	if (argc == 1)
	{
		return (write (1, "0\n", 2));
	}
	i = 1;
	while (argc > 2)
	{
		i++;
		argc--;
	}
	ft_number(i);
	write (1, "\n", 1);
}