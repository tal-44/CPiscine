/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:58:50 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/20 17:00:35 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_ifs(char *str, int i)
{
	if (str[i - 1] <= 47)
	{
		if ((str[i] <= 122) && (str[i] >= 97))
		{
			str[i] = str[i] - 32;
		}
	}
	else if ((str[i] <= 90) && (str[i] >= 65))
	{
		str[i] = str[i] + 32;
	}
	write(1, &str[i], 1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if ((str[0] <= 122) && (str[0] >= 97))
	{
		str[0] = str[0] - 32;
		write(1, &str[0], 1);
	}
	else
	{
		write(1, &str[0], 1);
	}
	i = 1;
	while (str[i])
	{
		check_ifs(str, i);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[50] = "Hola mundo 42mun -fd +fd";
	ft_strcapitalize(str);
	return (0);
}*/
