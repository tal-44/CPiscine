/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:38:25 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/20 18:25:08 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	int		i;

	i = ft_strcmp("Hola mundo", "Hola mundo");
	printf("%d\n", i);

	i = ft_strcmp("Hola munda", "Hola mundo");
	printf("%d\n", i);

	i = ft_strcmp("Hola mundo", "Hola munda");
	printf("%d\n", i);

	i = ft_strcmp("", "");
	printf("%d\n", i);

	i = ft_strcmp("Hola mundo", "");
	printf("%d\n", i);
	
	i = ft_strcmp("Hola mundo", "Hola mundo");
	printf("%d\n", i);
}*/
