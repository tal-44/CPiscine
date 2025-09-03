#ifndef HASHMAP_H
# define HASHMAP_H

typedef struct s_entry
{
	char	*key;
	char	*value;
}	t_entry;

typedef struct s_dict
{
	t_entry	*entries;
	int		size;
	int		capacity;
}	t_dict;
#endif