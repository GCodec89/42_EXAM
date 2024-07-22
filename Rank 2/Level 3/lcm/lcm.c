/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:58:46 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/22 13:25:16 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;

	if (a == '\0' || b == '\0')
	{
		return (0);
	}
	if (a <= b)
	{
		i = a;
	}
	else
	{
		i = b;
	}
	while (1)
	{
		if ((i % a == 0) && (i % b == 0))
		{
			return (i);
		}
		i++;
	}
}
