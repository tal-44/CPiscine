/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:46:23 by dboscan-          #+#    #+#             */
/*   Updated: 2025/08/24 20:12:00 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int introduced_numbers(char *argv)
{
    int i;
    while (argv[i] != '\0')
    {
        if (argv[i] == " " || (argv[i] < '5' && argv[i] > '0'))
            i++;
        else
            return (0);
    }
    return (1);
}
int numbers_length(char *argv)
{
    int i;
    
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


int checking_views(char *up_nums, char *dw_nums, char *lf_nums, char *rg_nums)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (99 <= (up_nums[i] + dw_nums[i]) && (up_nums[i] + dw_nums[i]) <= 101 && 99 <= (lf_nums[i] + rg_nums[i]) && (lf_nums[i] + rg_nums[i]) <= 101)
            i++;
        return (0); 
    }
    return (1);
}
int parsing(char *argv, char **vistas)
{
    if (correct_values(argv) == 1 && checking_views(vistas) == 1)
        return (1);
    return (0);
}