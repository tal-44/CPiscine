/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 02:12:56 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/25 02:21:11 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
	printf("%d\n%d\n%d\n%d\n%d",
	ft_recursive_power(2, 3), ft_recursive_power(0, 0),
	ft_recursive_power(-2, 3), ft_recursive_power(2, -3),
	ft_recursive_power(5, 3));
}*/
