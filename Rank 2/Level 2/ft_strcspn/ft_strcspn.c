/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:03:44 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 09:12:13 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == reject[0])
		{
			return (i);
		}
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str[] = "abcdefghijkl";
	char	c[] = "m";

	printf("%lu\n", strcspn(str, c));
	printf("%lu\n", ft_strcspn(str, c));
}*/