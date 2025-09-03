/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:57:24 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/31 15:59:51 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct s_entry
{
    char *key;   // ejemplo: "1000"
    char *value; // ejemplo: "thousand"
}   t_entry;

typedef	struct s_dict
{
	t_entry *entries;
	int size;
	int capacity;
}	t_dict;




/**/

t_dict	save(char	*buff)
{
	int	i;
	t_entry entry;

	while(buff[i])
	{

	}

}

t_dict dic;

dic->entries[0].key = malloc("0");
t_dict.entries[0].value = malloc("zero");
t_dict.size++;




//		char *reserve_memory(char *src)
char *malloc(char *src)
{
    int lenght;
	char str;

	lenght= ft_strlen(src);
	str = ((char *) malloc((lenght+1) * sizeof(char *)));

    if (str == NULL)
		return NULL;
    
	for (int i = 0; i < lenght; i++)
        str[i] = src[i];

    str[i] = '\0';
    return str;
}





int dict_expand(t_dict *dict)
{
    int new_capacity;

    t_entry *new_entries;
   
	if (dict->capacity == 0)
        new_capacity = 8;
    else
        new_capacity = dict->capacity * 2;

	new_entries = malloc(new_capacity * sizeof(t_entry));
    
	if (!new_entries)
        return 0;

	for (int i = 0; i < dict->size; i++)
        new_entries[i] = dict->entries[i];
    

	free(dict->entries);
    
	dict->entries = new_entries;
    
	dict->capacity = new_capacity;
    
	return 1;
}






char *find(t_dict *dict, char *key)
{
    for (int i = 0; i < dict->size; i++)
    {
        if (strcmp(dict->entries[i].key, key) == 0)
            return dict->entries[i].value;
    }
    return NULL;
}
