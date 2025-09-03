/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:09:29 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/16 16:16:03 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}
/*
int	main(void)
{
	int		a;
	int		b;
	int		*point_a;
	int		*point_b;
	char	c_a;
	char	c_b;

	a = 6;
	b = 3;
	point_a = &a;
	point_b = &b;
	ft_ultimate_div_mod(point_a, point_b);
	c_a = a + '0';
	write(1, &c_a, 1);
}*/
