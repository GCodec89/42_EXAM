/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:28:38 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/25 08:37:04 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	i = 0;
	str = &argv[1][i];
	if (argc != 2 || str[i] == '\0')
	{
		return (write (1, "\n", 1));
	}
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
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}
		if (!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
}
