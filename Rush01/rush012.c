/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush012.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:04:07 by dboscan-          #+#    #+#             */
/*   Updated: 2025/08/24 20:32:42 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *up_numbers(char *argv)
{
    char    up_nums[4];

    up_nums[0] = argv[0];
    up_nums[1] = argv[2];
    up_nums[2] = argv[4];
    up_nums[3] = argv[6];
    return (up_nums);
}
char    *down_numbers(char *argv)
{
    char    dw_nums[4];

    dw_nums[0] = argv[8];
    dw_nums[1] = argv[10];
    dw_nums[2] = argv[12];
    dw_nums[3] = argv[14];
    return (dw_nums);
}
char    *left_numbers(char *argv)
{
    char    lf_nums[4];

    lf_nums[0] = argv[16];
    lf_nums[1] = argv[18];
    lf_nums[2] = argv[20];
    lf_nums[3] = argv[22];
    return (lf_nums);
}
char    *right_numbers(char *argv)
{
    char    rg_nums[4];

    rg_nums[0] = argv[24];
    rg_nums[1] = argv[26];
    rg_nums[2] = argv[28];
    rg_nums[3] = argv[30];
    return (rg_nums);
}

char    **views(char *argv)
{
    char    **vistas;

    vistas[0] = up_numbers(argv);
    vistas[1] = down_numbers(argv);
    vistas[2] = left_numbers(argv);
    vistas[3] = right_numbers(argv);
    return vistas;
}

//
char    **matrix(void)
{
    char    **mtx;
    int i;
    int j;


    i = 0;
    mtx = malloc(4 * sizeof(char *));
    if (mtx == NULL)
        return(NULL);
    while (i < 4)
    {
        j = 0;
        mtx[i] = malloc(4 * sizeof(char));
        if (mtx == NULL)
            return(NULL);
        while (j < 4)
        {
            mtx[i][j] = '0';
            j++;
        }
        i++;
    }
    

    return (mtx);
}