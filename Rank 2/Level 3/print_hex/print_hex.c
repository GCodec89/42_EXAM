/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:29:27 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/22 11:53:58 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_numberhex(int n)
{
	char	base[] = "0123456789abcdef";

	if (n > 16)
	{
		ft_numberhex(n / 16);
	}
	write (1, &base[n % 16], 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		n;
	char 	*str;

	if (argc != 2)
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
	ft_numberhex(n);
	write (1, "\n", 1);
}
