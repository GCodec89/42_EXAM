/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:03:39 by gonolive          #+#    #+#             */
/*   Updated: 2024/07/19 18:11:13 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	div;

	div = 128;
	while (div != 0)
	{
		if (div <= octet)
		{
			write (1, "1", 1);
			octet = octet % div;
		}
		else
		{
			write (1, "0", 1);
		}
		div = div / 2;
	}
}
