/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:15:25 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 08:24:19 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	if (argc != 2)
	{
		return (write (1, "\n", 1));
	}
	i = 0;
	str = &argv[1][i];
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		while (!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			i++;
		}
		if (!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			write (1, "   ", 3);
		}
	}
	write (1, "\n", 1);
}