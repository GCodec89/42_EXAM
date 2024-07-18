/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:05:35 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 21:30:30 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_base(char c, int base)
{
	if (base <= 10)
	{
		return (c >= '0' && c <= '9');
	}
	else
	{
		return (c >= '0' && c <= '9' || c >= 'A' && c <= ('A' + base - 10) || c >= 'a' && c <= ('a' + base - 10));
	}
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
		{
			sign = -1;
		}
		i++;
	}
	res = 0;
	while (str[i] != '\0' && ft_base(str[i], str_base))
	{
		if (str[i] >= 'a' && str[i] <= 'f')
		{
			res = res * str_base + str[i] - 'a' + 10;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			res = res * str_base + str[i] - 'A' + 10;
		}
		else
		{
			res = res * str_base + str[i] - '0';
		}
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	char	str[] = "10";
	int		base = 16;

	printf("%d\n", ft_atoi_base(str, base));
}*/