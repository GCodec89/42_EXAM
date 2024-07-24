/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:52:53 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/23 12:22:54 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
			{
				return ((char *) s1);
			}
			i++;
		}
		s1++;
	}
	return (0);
}

int	main(void)
{
	char	*s = "cucurela";
	char	*c = "paella";

	printf("%s\n", ft_strpbrk(s, c));
	printf("%s\n", strpbrk(s, c));
}
