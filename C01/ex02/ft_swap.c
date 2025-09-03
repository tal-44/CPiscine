/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:34:35 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/18 14:49:11 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	ca;
	char	cb;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	ca = a + '0';
	cb = b + '0';
	write(1, &ca, 1);
	write(1, &cb, 1);
	return (0);
}*/
