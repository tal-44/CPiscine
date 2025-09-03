/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:59:38 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/19 16:39:33 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
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
	int i = ft_str_is_numeric("Hola Mundo");
	char c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_numeric("01948987493");
	c = i + '0';
	write(1, &c, 1);
}*/
