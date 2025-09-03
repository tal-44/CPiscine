/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:37:07 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/31 20:27:11 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void    print_triade(t_dict dic, char *triade)
{
    if (triade[0] != 0)
    {
        ft_putstr(find(dic, triade[0]), 1);
        ft_putstr(find(dic, "100"), 1);
    }
    if (triade[1] != 0 && triade[1] != 1)
    {
        ft_putstr(find(dic, triade[1]), 1);
        ft_putstr(find(dic, triade[2]), 1);
    }    
    else if (triade[1] == 1)
        ft_putstr(find(dic, ft_strcat(triade[1], triade[2])), 1);
}

void    print_triades(t_dict dic, char **triades)
{
    int     len;
    int     i;
    char    illion[ft_strlen_two(triades) * 3 - 2];

    len = ft_strlen_two(triades);
    while (triades[i])
    {
        print_triade(dic, triades[i]);
        illion[0] = 1;
        i = 1;
        while (illion[i])
        {
            illion[i] = "0";
        }
        ft_putstr(find(dic, illion), 1); 
    }
               
}