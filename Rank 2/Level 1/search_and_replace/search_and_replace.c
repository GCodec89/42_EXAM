/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:46:24 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/22 13:53:51 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{
			write (1, &argv[3][0], 1);
		}
		else
		{
			write (1, &argv[1][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}
