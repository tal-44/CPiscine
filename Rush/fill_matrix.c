/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:51:41 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/24 22:30:01 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_correct(char **matrix, char **vistas);

void    casos_seguros(char *array, char vista1, char vista2)
{
    if (vista1 - '4' == 0)
    {
        array[0] = '1';
        array[1] = '2';
        array[2] = '3';
        array[3] = '4';
    }
    else if (vista1 - '1' == 0)
        array[0] = '4';
    if (vista2 - '4' == 0)
    {
        array[3] = '1';
        array[2] = '2';
        array[1] = '3';
        array[0] = '4';
    } 
    else if (vista2 - '1' == 0)
        array[3] = '4';
    if  (vista1 - '3' == 0 && vista2 - '2' == 0)
        array[2] = '4';
    if  (vista2 - '3' == 0 && vista1 - '2' == 0)
        array[1] = '4';
    if  (vista1 - '2' == 0 && vista2 - '1' == 0)
        array[0] = '3';
    if  (vista2 - '2' == 0 && vista1 - '1' == 0)
        array[3] = '3';
}

int is_valid(char **array, int row, int col, int num)
{
    int i;

    i = 0;
    while (i < 4) 
    {
        if (array[row][i] == num) {
            return (0);
        }
        i++;
    }
    i = 0;
    while (i < 4) 
    {
        if (array[i][col] == num) {
            return (0);
        }
        i++;
    }
    return (1);
}

int casos_random(char **array, char **vistas)
{
    int     row;
    int     col;
    char    num;
    
    row = 0;
    while (row < 4) 
    {
        col = 0;
        while (col < 4) 
        {
            if (array[row][col] == '0') 
            {
                num = 1;
                while (num <= 4) 
                {
                    if (is_valid(array, row, col, num))
                    {
                        array[row][col] = num;
                        if(casos_random(array, vistas))
                            return (1);
                        array[row][col] = '0';
                    }
                    num++;
                }
                return (0); 
            }
            col++;
        }
        row++;
    }
    return (is_correct(array, vistas));
}

int fill_matrix(char **matrix, char **vistas) {
    int     i;
    char    *temp_array;

    temp_array = malloc(4 * sizeof(char));
        if (temp_array == NULL)
            return(0);
    i = 0;
    while (i < 4)
    {
        casos_seguros(matrix[i], vistas[2][i], vistas[3][i]);
        temp_array[0] = matrix[0][i];
        temp_array[1] = matrix[1][i];
        temp_array[2] = matrix[2][i];
        temp_array[3] = matrix[3][i];
        casos_seguros(temp_array, vistas[0][i], vistas[1][i]);
        matrix[0][i] = temp_array[0];
        matrix[1][i] = temp_array[1];
        matrix[2][i] = temp_array[2];
        matrix[3][i] = temp_array[3];
        i++;
    }
    if (casos_random(matrix, vistas))
        return (1);
    return (0);
}
