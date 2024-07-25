/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:18:15 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/25 13:35:45 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		len;
	int		n;
	char	c;
	char	*res;

	len = 0;
	n = nbr;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
	{
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
	{
		return (NULL);
	}
	if (nbr == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		n = nbr % 10;
		c = n + '0';
		res[--len] = c;
		nbr = nbr / 10;
	}
	return (res);
}
