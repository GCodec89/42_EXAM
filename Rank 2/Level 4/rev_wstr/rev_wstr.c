/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:19:58 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 11:04:36 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		start;
	int		end;
	char	*str;

	if (argc != 2)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while ((str[i] == ' ' || str[i] == '\t'))
	{
		i--;
	}
	while (i >= 0)
	{
		end = i;
		while (!(str[i] == ' ' || str[i] == '\t') && i >= 0)
		{
			i--;
		}
		i++;
		start = i;
		while (start <= end && i >= 0) 
		{
			write (1, &str[start], 1);
			start++;
		}
		i--;
		while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
		{
			i--;
		}
		if (i > 0)
		{
			write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
}
