/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:14:52 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/23 22:21:17 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	putnbr_recursive(long nbr, char *base, int base_len)
{
	char	print;

	if (nbr >= base_len)
		putnbr_recursive(nbr / base_len, base, base_len);
	print = base[nbr % base_len];
	write(1, &print, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	if (!valid(base))
		return ;
	nb = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	putnbr_recursive(nb, base, ft_strlen(base));
}
/*
int main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01234567");
	return(0);
}*/