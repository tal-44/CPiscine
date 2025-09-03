/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:08:08 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/15 13:06:06 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	int		*p_div;
	int		*p_mod;
	char	div_c;
	char	mod_c;

	a = 6;
	b = 3;
	div = 0;
	mod = 0;
	p_div = &div;
	p_mod = &mod;

	ft_div_mod(a, b, p_div, p_mod);
	div_c = div + '0';
	mod_c = mod + '0';
	write(1, &div_c, 1);
	write(1, &mod_c, 1);
	return (0);
}*/
