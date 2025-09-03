/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:50:16 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/18 13:11:45 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numeros[3];

	numeros[0] = '0';
	while (numeros[0] <= '7')
	{
		numeros[1] = numeros[0] + 1;
		while (numeros[1] <= '8')
		{
			numeros[2] = numeros[1] + 1;
			while (numeros[2] <= '9')
			{
				write(1, numeros, 3);
				if (numeros[0] < '7')
				{
					write(1, ", ", 2);
				}
				numeros[2]++;
			}
			numeros[1]++;
		}
		numeros[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
