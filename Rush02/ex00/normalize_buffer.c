/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:13:42 by gbarreto          #+#    #+#             */
/*   Updated: 2025/08/31 21:14:23 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	normalize_line(char *src, t_dict *dict)
{
	char	sub_str[1024];
	int		i;
	int		size;
	int		count;

	size = dict->size;
	count = 0;
	i = 0;
	while (src[i] != ':')
	{
		sub_str[i] = src[i];
		i++;
	}
	ft_trim(sub_str);
	if (dict->capacity == dict->size)
		dict_expand(dict);
	dict->entries[size].key = reserve_memory(sub_str);
	ft_str_null(sub_str);
	while (src[i])
	{
		sub_str[count] = src[i];
		count++;
		i++;
	}
	ft_trim(sub_str);
	if (dict->capacity == dict->size)
		dict_expand(dict);
	dict->entries[size].value = reserve_memory(sub_str);
	dict->size++;
	ft_str_null(sub_str);
}

void	normalize_buff(char src[1024], t_dict *dict)
{
	char	sub_str[1024];
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (src[i])
	{
		if (src[i] == '\n' || src[i] == '\0')
		{
			count = 0;
			normalize_line(sub_str, dict);
			ft_str_null(sub_str);
		}
		sub_str[count] = src[i];
		count++;
		i++;
	}
}
