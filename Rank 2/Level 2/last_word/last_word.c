/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:39:50 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/24 12:48:42 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	while (str[i] == ' ' || str[i] == '\t')
	{
		i--;
	}
	end = i;
	while (!(str[i] == ' ' || str[i] == '\t') && i >= 0)
	{
		i--;
	}
	i++;
	start = i;
	while (start <= end)
	{
		write (1, &str[start], 1);
		start++;
	}
	write (1, "\n", 1);
}
