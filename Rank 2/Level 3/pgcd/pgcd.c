/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:39:02 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/25 08:48:27 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;
	int	i;

	if (argc != 3)
	{
		return (printf("\n"));
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = n2;
	if (n1 < n2)
	{
		i = n1;
	}
	while (i >= 2)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			return (printf("%d\n", i));
		}
		i--;
	}
	return (printf("1\n"));
}