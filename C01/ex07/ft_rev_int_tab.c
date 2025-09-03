/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:33:51 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/18 17:28:38 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int tab[6]={1, 2, 3, 4, 5, 6};
	int *p = &tab[0];
	int i = 0;

	ft_rev_int_tab(p, 6);
	while (i < 6) 
	{
		char c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}*/
