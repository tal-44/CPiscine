/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 02:45:40 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/25 02:56:55 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main (void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(8));
	printf("%d\n", ft_sqrt(88));
}*/
