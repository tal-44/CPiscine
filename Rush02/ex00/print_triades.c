/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_triades.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:37:07 by jmiguele          #+#    #+#             */
/*   Updated: 2025/09/03 10:55:25 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void    print_triade(t_dict *dic, char *triade)
{

    if (triade[0] != '0')
    {
	    ft_putstr(find(dic, &triade[0]), 1);
        ft_putstr(find(dic, "100"), 1);
    }
    if (triade[1] != '0' && triade[1] != '1')
    {
        ft_putstr(find(dic, &triade[1]), 1);
        ft_putstr(find(dic, &triade[2]), 1);
    }    
    else if (triade[1] == '1')
        ft_putstr(find(dic, ft_strcat(&triade[1], &triade[2])), 1);
}

void    print_triades(t_dict *dic, char **triades)
{
    int     len;
    int     i;
    char    illion[ft_strlen_two(triades - 1) * 3 + 2];

    len = ft_strlen_two(triades);
    illion[0] = 1;
    i = 1;
    while (illion[i])
    {
        illion[i] = '0';
        i++;
    }
    i = 0;
    while (triades[i])
    {
        print_triade(dic, triades[i]);
        if (ft_strlen(illion) > 3)
        {
            ft_putstr(find(dic, illion), 1);
            illion[ft_strlen(illion)] = '\0';
            illion[ft_strlen(illion)] = '\0';
            illion[ft_strlen(illion)] = '\0';
        }
        i++;
    }
}
