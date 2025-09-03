/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:12:45 by jmiguele          #+#    #+#             */
/*   Updated: 2025/09/01 20:58:12 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min > max)
		return (dest = NULL);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (dest);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*numeros = ft_range(10, 120);
	
	for (int i = 0; i <= 250; i++)
		printf("%d\n", numeros[i]); 
	
	int j;

	j = 0;
	while(numeros[j])
	{
		printf("%d\n", numeros[j]);
		j++;
	}
	free(numeros);
}*/