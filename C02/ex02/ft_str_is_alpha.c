/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:26:15 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/19 16:38:09 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
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
	int i = ft_str_is_alpha("abcdefghijkl");
	char c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_alpha("abcghij[`aBCZ");
	c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_alpha("23adsaffq");
	c = i + '0';
	write(1, &c, 1);
}*/
