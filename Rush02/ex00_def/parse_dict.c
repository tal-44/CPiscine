/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:29:28 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/31 20:26:16 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_load_dict(char *str)
{
	int	file;

	file = open(str, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Error", 2);
		exit(1);
	}
	return (file);
}

char	*parse_dict(char *file, char buff[1024])
{
	int		file;
	char	buff_temp[1024];

	file = ft_load_dict(file);
	read(file, buff_temp, sizeof(file));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
