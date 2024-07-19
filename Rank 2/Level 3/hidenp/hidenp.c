/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:32:40 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 09:57:47 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		len;
	char	*s1;
	char	*s2;

	if (argc != 3)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	j = 0;
	len = 0;
	s1 = &argv[1][i];
	s2 = &argv[2][i];
	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}
	if (i == len)
	{
		return (write (1, "1\n", 2));
	}
	else
	{
		return (write (1, "0\n", 2));
	}
}
