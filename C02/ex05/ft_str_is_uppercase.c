/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:51:17 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/19 16:54:10 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
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
	int i = ft_str_is_uppercase("FADSS");
	char c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_uppercase("SDSFDS`aBCZ");
	c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_uppercase("23SFSDF");
	c = i + '0';
	write(1, &c, 1);
}*/
