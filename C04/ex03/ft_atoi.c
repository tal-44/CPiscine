/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:20:47 by jmiguele          #+#    #+#             */
/*   Updated: 2025/09/03 12:19:18 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] && str[i] <= 57 && str[i] >= 48)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	
	printf("%d\n", ft_atoi("   --+--1234ab567"));
	printf("%d\n", ft_atoi("  ---+--1234ab567"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("-0"));
	printf("%d\n", ft_atoi("0000234"));
	printf("%d\n", ft_atoi("-0000234"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", ft_atoi("-2147483649"));
	printf("%d\n", ft_atoi("-"));
	printf("%d\n", ft_atoi("+"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("    "));
	printf("%d\n", ft_atoi("12 34"));
	printf("%d\n", ft_atoi("-gfsd-+- 12 34"));
	printf("%d\n", ft_atoi("1 2 3 4 5 6 7 8 9 0 a b c d e f 
	g h i j k l m n o p q r s t u v w x y z"));
}*/
