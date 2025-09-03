/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:02:51 by jmiguele          #+#    #+#             */
/*   Updated: 2025/09/01 20:57:53 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min - 1;
	*range = (int *)malloc((size) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	num = ft_ultimate_range(&range, 10, 120);
	
	for (int i = 0; i <= num; i++)
		printf("%d\n", range[i]); 
	
	int j;

	j = 0;
	while(range[j])
	{
		printf("%d\n", range[j]);
		j++;
	}
	free(range);
}
*/
