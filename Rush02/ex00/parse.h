#ifndef PARSE_H
# define PARSE_H

void ft_parse_nbr(char *nbr);
char *ft_del_zero(char *nbr);
char **make_triades(int length);
char **ft_triades(char *nbr ,int length);
int ft_load_dict(char *str);
char *parse_dict(char *file, char buff[1024]);
#endif