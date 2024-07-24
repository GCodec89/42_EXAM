/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:43:17 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/24 14:06:45 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check_first(char *str, char c, int i)
{
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i--;
	}
	return (1);
}

int	ft_check_second(char *str1, char *str2, char c, int i)
{
	int	j;

	j = 0;
	while (str1[j] != '\0')
	{
		j++;
	}
	while (j >= 0)
	{
		if (str1[j] == c)
		{
			return (0);
		}
		j--;
	}
	while (i >= 0)
	{
		if (str2[i] == c)
		{
			return (0);
		}
		i--;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*str1;
	char	*str2;

	if (argc != 3)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	j = 0;
	str1 = &argv[1][i];
	str2 = &argv[2][j];
	while (str1[i] != '\0')
	{
		if (ft_check_first(str1, str1[i], i - 1))
		{
			write (1, &str1[i], 1);
			i++;
		}
		else
		{
			i++;
		}
	}
	while (str2[j] != '\0')
	{
		if (ft_check_second(str1, str2, str2[j], j - 1))
		{
			write (1, &str2[j], 1);
			j++;
		}
		else
		{
			j++;
		}
	}
	write (1, "\n", 1);
}