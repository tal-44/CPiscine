/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:29:28 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/31 23:17:39 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "headers.h"
int	ft_load_dict(char *str)
{
	int	file;

	file = open(str, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n", 2);
		exit(1);
	}
	return (file);
}

char	*parse_dict(char *name, char buff[1024])
{
	int		file;

	file = ft_load_dict(name);
	read(file, buff, sizeof(file));
	return (buff);

}

