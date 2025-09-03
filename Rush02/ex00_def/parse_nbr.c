/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:54:09 by gbarreto          #+#    #+#             */
/*   Updated: 2025/08/31 19:15:22 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_parse_nbr(char *nbr)
{
	int		length;
	int		i;

	length = ft_strlen(nbr);
	if (!(ft_str_is_numeric(nbr)))
	{
		ft_putstr("Error", 2);
		exit (1);
	}
	i = 0;
	while (nbr[i])
	{
		if (nbr[i] != '0')
		{
			i = -1;
			break ;
		}
		i++;
	}
	if (i > 0)
	{
		ft_putstr("zero", 1);
		exit(0);
	}
}

char	*ft_del_zero(char *nbr)
{
	if (nbr[0] != '0')
		return (nbr);
	nbr[0] = '\0';
	return (ft_del_zero(nbr++));
}

char	**help_triades(int lenght)
{
	char	**mtx;
	int		j;
	int		i;
	int		length;

	i = 0;
	while (i < (length / 3 + 1))
	{
		j = 0;
		mtx[i] = malloc(3 * sizeof(char));
		if (mtx == '\0')
		{
			ft_putstr("Error", 2);
			exit(1);
		}
		while (j < 3)
		{
			mtx[i][j] = '0';
			j++;
		}
		i++;
	}
}

char	**make_triades(int length)
{
	char	**mtx;
	int		i;
	int		j;

	i = 0;
	mtx = malloc((length / 3 + 1) * sizeof(char *));
	if (mtx == '\0')
	{
		ft_putstr("Error", 2);
		exit(1);
	}
	help_triades(length);
	return (mtx);
}

char	**ft_triades(char *nbr, int length)
{
	char	**nmbs;
	int		i;
	int		j;
	int		k;

	ft_del_zero(nbr);
	nmbs = make_triades(length);
	i = 0;
	j = 0;
	k = 3 - (length % 3);
	if (k == 3)
		k = 0;
	while (nbr[i])
	{
		if (k == 3)
		{
			j++;
			k = 0;
		}
		nmbs[j][k] = nbr[i];
		i++;
		k++;
	}
	return (nmbs);
}
