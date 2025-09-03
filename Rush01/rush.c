/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:20:04 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/24 20:32:01 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    **matrix(void);
char    **views(char *argv);
int checking_views(char **views);
int fill_matrix(int matrix[4][4], char **vistas);

void    print_matrix(char **matrix)
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
    j = 0;
        while (j < 4)
        {
            write(1, matrix[i][j]);
        }
        
    }
    
}

void rush(char *arg)
{
    char **mtx = matrix();

    char    **vistas = views(arg);

    if (checking_views(views))
    {   

        if (fill_matrix(matrix, vistas))
        {
            // imprimir matriz
        }
        else
        {
            // imprimir error
        }
    }

}