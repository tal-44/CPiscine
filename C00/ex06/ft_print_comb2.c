/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:20:19 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/18 12:53:10 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int numeros[2])
{
	char	c;

	c = (numeros[0] / 10) + '0';
	write(1, &c, 1);
	c = (numeros[0] % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (numeros[1] / 10) + '0';
	write(1, &c, 1);
	c = (numeros[1] % 10) + '0';
	write(1, &c, 1);
	if (numeros[0] < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	numeros[2];

	numeros[0] = 0;
	while (numeros[0] <= 98)
	{
		numeros[1] = numeros[0] + 1;
		while (numeros[1] <= 99)
		{
			print(numeros);
			numeros[1]++;
		}
		numeros[0]++;
	}
}
/*

int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
