/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:37:47 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/19 16:49:13 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		{
			continue ;
		}
		return (0);
	}
	return (1);
}

/*
int	main(void)
{
	int i = ft_str_is_lowercase("abcdefghijkl");
	char c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_lowercase("abcghij[`aBCZ");
	c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_lowercase("23Aadsaffq");
	c = i + '0';
	write(1, &c, 1);
}*/
