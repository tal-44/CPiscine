/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 01:46:09 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/25 07:07:51 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	num = 1;
	while (i <= power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}
/*
int main(void)
{
	printf("%d\n%d\n%d\n%d\n%d",
	ft_iterative_power(2, 3), ft_iterative_power(0, 0),
	ft_iterative_power(-2, 3), ft_iterative_power(2, -3),
	ft_iterative_power(5, 3));
}*/
