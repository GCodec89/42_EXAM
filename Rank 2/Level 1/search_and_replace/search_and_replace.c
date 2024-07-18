/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:53:07 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 21:36:24 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	if (argc != 4)
	{
		return (write(1, "\n", 1));
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] != '\0')
	{
		if (str[i] == argv[2][0])
		{
			str[i] = argv[3][0];
		}
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}