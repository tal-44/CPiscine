/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:02:45 by gbarreto          #+#    #+#             */
/*   Updated: 2025/08/31 20:21:36 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str, int mode)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(mode, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	ft_str_null(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		str[i] = '\0';
	return (0);
}

char	*ft_trim(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		i--;
	}
	while (i >= 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			str[i] = '\0';
			i--;
		}
		else
		{
			break ;
		}
	}
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (&str[i]);
}
