/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:53:53 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/18 15:02:29 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	swap;
	int	len;
	int	*res;

	if (end >= start)
	{
		len = end - start + 1;
	}
	if (start > end)
	{
		len = start - end + 1;
	}
	res = (int *)malloc(sizeof(int) * (len));
	if (!res)
	{
		return (NULL);
	}
	if (end >= start)
	{
		while (len >= 0)
		{
			res[--len] = start;
			start++;
		}
	}
	else if (start >= end)
	{
		while (len >= 0)
		{
			res[--len] = start;
			start--;
		}
	}
	return (res);
}

/*int	main(void)
{
	int	tab[] = {3, 2, 1};
	int	start = 0;
	int	end = -3;
	int	*res = ft_rrange(start, end);

	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	//printf("%d\n", tab[3]);
	//printf("\n");
	printf("%d\n", res[0]);
	printf("%d\n", res[1]);
	printf("%d\n", res[2]);
	printf("%d\n", res[3]);
}*/