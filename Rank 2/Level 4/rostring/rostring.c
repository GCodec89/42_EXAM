/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:30:59 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 13:45:55 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (argc < 2)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	j = i;
	while (!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		while (!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}
		write (1, " ", 1);
	}
	while (j <= k)
	{
		write (1, &str[j], 1);
		j++;
	}
	write (1, "\n", 1);
}