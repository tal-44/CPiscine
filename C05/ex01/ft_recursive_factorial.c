/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 01:25:47 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/25 01:45:41 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
int	main(void)
{
	printf("%d\n%d\n%d\n%d\n%d",
	ft_recursive_factorial(3), ft_recursive_factorial(1),
	ft_recursive_factorial(0), ft_recursive_factorial(-3),
	ft_recursive_factorial(5));
}*/
