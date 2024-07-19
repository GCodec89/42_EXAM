/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:44:03 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 15:19:52 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
	{
		i++;
	}
	split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
	{
		return (NULL);
	}
	k = 0;
	while (str[i] != '\0')
	{
		j = 0;
		split[k] = (char *)malloc(sizeof(char) * 4056);
		if (!split[k])
		{
			return (NULL);
		}
		while (!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			split[k][j] = str[i];
			i++;
			j++;
		}
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			i++;
		}
		split[k][j] = '\0';
		k++;
	}
	split[k] = '\0';
	return (split);
}
