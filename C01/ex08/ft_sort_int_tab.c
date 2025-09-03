/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:48:19 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/18 18:58:53 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}
/*

int	main(void)
{
	int tab[11] = {4, 2, 0, -5, 100, -99, 45, -15555555, -888, 0, 99999};
	int *p = &tab[0];
	int	i = 0;
	
	ft_sort_int_tab(p, 11);
	while (i < 11)
	{
		char    c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
 }*/
