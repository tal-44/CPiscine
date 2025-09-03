/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:06:40 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/20 18:25:20 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
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

	i = ft_strncmp("Hola mundo", "Hola mundo", 20);
	printf("%d\n", i);

	i = ft_strncmp("Hola munda", "Hola mundo", 5);
	printf("%d\n", i);

	i = ft_strncmp("Hola mundo", "Hola munda", 20);
	printf("%d\n", i);

	i = ft_strncmp("", "", 5);
	printf("%d\n", i);

	i = ft_strncmp("Hola mundo", "", 20);
	printf("%d\n", i);
	
	i = ft_strncmp("Hola mundo", "Hola mundo", 0);
	printf("%d\n", i);	
}*/
