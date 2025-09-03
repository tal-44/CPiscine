/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 02:58:32 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/26 12:11:53 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(21));
	printf("%d\n", ft_is_prime(23));
}*/
