/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:04:09 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 15:12:53 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	n;
	int	i;

	if (argc != 2)
	{
		return (printf("\n"));
	}
	n = atoi(argv[1]);
	if (n == 1)
	{
		return (printf("%d\n", n));
	}
	i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
			if (n > 1)
			{
				printf("*");
			}
			i = 1;
		}
		i++;
	}
	printf("\n");
}