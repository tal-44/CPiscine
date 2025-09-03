#ifndef UTILS_H
# define UTILS_H

#include "headers.h"
void ft_putstr(char *str, int mode);
int ft_strlen(char *str);
int ft_strlen_two(char **str);
int ft_str_null(char *str);
int ft_str_is_numeric(char *str);
int ft_str_null(char *str);
char *ft_trim(char *str);
char *ft_strcat(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);
int dict_expand(t_dict *dict);
char *reserve_memory(char *src);
int	ft_str_null(char *str);
char *find(t_dict *dict, char *key);
void print_triades(t_dict *dic, char **triades);
#endif
