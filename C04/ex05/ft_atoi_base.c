/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:02:19 by jmiguele          #+#    #+#             */
/*   Updated: 2025/09/03 12:40:25 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	aux(int num, char *str, char *base, int iterator)
{
	int	index;

	index = get_index(str[iterator], base);
	while (index != -1)
	{
		num = num * ft_strlen(base) + index;
		iterator++;
		index = get_index(str[iterator], base);
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	num;
	int	sign;
	int	base_len;

	if (!valid(base))
		return (0);
	i = 0;
	sign = 1;
	num = 0;
	base_len = ft_strlen(base);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	return ((aux (num, str, base, i)) * sign);
}
/*
int	main(void)
{
    printf("%d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789")); // -1234
    printf("%d\n", ft_atoi_base("   -111", "01"));                    // -7
    printf("%d\n", ft_atoi_base("7B", "0123456789ABCDEF"));           // 123
}*/
