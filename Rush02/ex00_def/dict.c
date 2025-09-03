/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:57:24 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/31 20:23:31 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*reserve_memory(char *src)
{
	char	*str;
	int		lenght;
	int		i;

	lenght = ft_strlen(src);
	str = ((char *) malloc((lenght + 1) * sizeof(char *)));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	dict_expand(t_dict *dict)
{
	int		i;
	int		new_capacity;
	t_entry	*new_entries;

	if (dict->capacity == 0)
		new_capacity = 8;
	else
		new_capacity = dict->capacity * 2;
	new_entries = malloc(new_capacity * sizeof(t_entry));
	if (!new_entries)
		return (0);
	i = 0;
	while (i < dict->size)
	{
		new_entries[i] = dict->entries[i];
	}
	free(dict->entries);
	dict->entries = new_entries;
	dict->capacity = new_capacity;
	return (1);
}

char	*find(t_dict *dict, char *key)
{
	int		i;

	i = 0;
	while (i < dict->size)
	{
		if (strcmp(dict->entries[i].key, key) == 0)
			return (dict->entries[i].value);
		i++;
	}
	return (NULL);
}
