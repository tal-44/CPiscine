/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:56:42 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/19 17:09:46 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i - 1] >= 32 && str[i - 1] <= 126)
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
	int i = ft_str_is_printable("DSADSdsfs4545///");
	char c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_printable("\nŧ\t\f\v");
	c = i + '0';
	write(1, &c, 1);

	i = ft_str_is_printable("-_134");
	c = i + '0';
	write(1, &c, 1);

}*/
