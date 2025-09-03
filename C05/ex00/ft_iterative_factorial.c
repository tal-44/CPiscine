/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 01:07:06 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/25 01:40:05 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	if (nb < 0)
		return (0);
	i = 1;
	num = 1;
	while (i <= nb)
	{
		num = num * i;
		i++;
	}
	return (num);
}
/*
int	main(void)
{
	printf("%d\n%d\n%d\n%d\n%d", 
	ft_iterative_factorial(3), ft_iterative_factorial(1), 
	ft_iterative_factorial(0), ft_iterative_factorial(-3), 
	ft_iterative_factorial(5));
}*/
