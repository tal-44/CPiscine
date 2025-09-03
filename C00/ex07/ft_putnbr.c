/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:18:06 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/21 15:18:04 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int num)
{
	char	c;

	if (num == 0)
	{
		write(1, "0", 1);
	}
	else if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
		print(num);
	}
	else if (num > 9)
	{
		print(num / 10);
		c = (num % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		print(nb);
	}
}

/*
 * MAIN

int	main(void)
{
	int	i;

	i = 42;
	ft_putnbr(i);
	write(1, "\n", 1);
	i = -42;
	ft_putnbr(i);
	write(1, "\n", 1);
	i = 4000300;
	ft_putnbr(i);
	write(1, "\n", 1);
	i = -4445665;
	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);
}*/
