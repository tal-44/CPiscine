/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:13:42 by gbarreto          #+#    #+#             */
/*   Updated: 2025/08/31 19:59:06 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

t_dict	normalize_line(char *src, t_dict dict)
{
	char	sub_str[1024];
	int	i;
	int	size;
	int	count;

	size = dict.size;
	count = 0;
	i = 0;
	while(src[i] != ':')
	{
		sub_str[i] = src[i];
		i++;
	}
	trim(sub_str);
	if (dict.capacity == dict.size)
		dict_expand(dict);
	dict.entries[size].key = reserve_memory(sub_str);
	delete_str(sub_str);
	while(src[i])
	{
		sub_str[count] = src[i];
		count++;
		i++;
	}
	trim(sub_str);
	if (dict.capacity == dict.size)
		dict_expand(dict);
	dict.entries[size].value = reserve_memory(sub_str);
	dict.size++;
	delete_str(sub_str);
	return (dict);
}

t_dict	normalize_buff(char src[1024], t_dict	dict)
{
	char	*sub_str[1024];
	int	i;
	int j;
	int	count;

	count = 0;
	i = 0;
	while(src[i])
	{
		if (src[i] == '\n' || src[i] == '\0')
		{
			count = 0;
			dict = normalize_line(sub_str, dict);
			delete_str(sub_str);
		}
		sub_str[count] = src[i];
		count++;
		i++;
	}
	return (dict);
}
