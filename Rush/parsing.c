/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:46:23 by dboscan-          #+#    #+#             */
/*   Updated: 2025/08/24 22:22:42 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int introduced_numbers(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {
        if (argv[i] == 32 || (argv[i] < '5' && argv[i] > '0'))
            i++;
        else
            return (0);
    }
    return (1);
}
int numbers_length(char *argv)
{
    int i;
    
    i = 0;
    while (argv[i] != '\0')
    {
        i++;    
    }
    if (i != 31)
        return (0);
    return (1);
}
int correct_values(char *argv)
{
    if (introduced_numbers(argv) == 1 && numbers_length(argv) == 1)
        return (1);
    else if (numbers_length(argv) == 0 && introduced_numbers(argv) == 0)
    {
        write(2, "Error: too much arguments and incorrect values.", 47);
        return (0);
    }
    else if (introduced_numbers(argv) == 0)
    {
        write(2, "Error: incorrect values.", 24);
        return (0);
    }
    write(2, "Error: too much arguments.", 26);
    return (0);
}


int checking_views(char **views)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (100 <= (views[0][i] + views[1][i]) && (views[0][i] + views[1][i]) <= 102 &&
         99 <= (views[2][i] + views[3][i]) && (views[2][i] + views[3][i]) <= 101)
            i = i + 2;
        write(2, "Error: not possible values for execution.", 41);
        return (0); 
    }
    return (1);
}
int parsing(char *argv, char **views)
{
    if (correct_values(argv) == 1 && checking_views(views) == 1)
        return (1);
    return (0);
}