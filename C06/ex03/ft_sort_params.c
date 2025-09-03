/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:38:20 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/28 16:01:49 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

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

void	ft_sort(char **tab, int size)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (size - 1))
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			ft_sort(tab, size);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	argv[0] = NULL;
	ft_sort(argv, argc);
	i = 1;
	while (argv[i])
	{
		print(argv[i]);
		i++;
	}
}
