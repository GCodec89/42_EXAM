/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:09:54 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 12:26:49 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*res;
	int	i;

	len = 1;
	if (end > start)
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
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			res[i] = start;
			start++;
			i++;
		}
		return (res);
	}
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = start;
			start--;
			i++;
		}
		return (res);
	}
}

/*int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	start = 1;
	int	end = 4;
	int	*res;

	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	res = ft_range(start, end);
	printf("%d\n", res[0]);
	printf("%d\n", res[1]);
	printf("%d\n", res[2]);
	printf("%d\n", res[3]);
}*/
