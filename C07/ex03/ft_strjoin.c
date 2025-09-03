/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 20:59:29 by jmiguele          #+#    #+#             */
/*   Updated: 2025/09/01 21:12:13 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_lens(char **strs, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k])
		{
			i++;
			k++;
		}
		j++;
	}
	return (i);
}

int	get_length(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*conct(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			str[k] = strs[j][i];
			i++;
			k++;
		}
		i = 0;
		while (sep[i] && j < (size - 1))
		{
			str[k] = sep[i];
			i++;
			k++;
		}
		j++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		size_seps;

	if (size == 0)
		return ((char *) malloc(0));
	size_seps = get_length(sep) * (size - 1);
	str = (char *) malloc((get_lens(strs, size) + size_seps) * sizeof(char));
	if (str == NULL)
		return (0);
	return (conct(size, strs, sep, str));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[2];
	for(int i = 0; i < 5; i++)
		strs[i] = "hoal";

	char	*str = ft_strjoin(5, strs, "tusmuertos");
	printf("%s\n", str);
	free(str);
}*/