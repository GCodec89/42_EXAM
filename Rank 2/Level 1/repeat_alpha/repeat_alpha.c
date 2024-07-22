/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:34:14 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/22 10:44:01 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		k;
	char	*str;

	if (argc != 2)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			k = str[i] - 'a';
			while (k >= 0)
			{
				write (1, &str[i], 1);
				k--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			k = str[i] - 'A';
			while (k >= 0)
			{
				write (1, &str[i], 1);
				k--;
			}
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}
