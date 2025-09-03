/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:11:07 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/24 22:22:40 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int parsing(char *argv, char **views);
char    **createViews(char *argv);
void	rush(char *argv, char **views);

int main(int argc, char **argv)
{
    char    **views; 

    if (argc == 2)
    {    
        views = createViews(argv[1]);
        if (parsing(argv[1], views))
            rush(argv[1], views);
    }
    else
    {
        write(1, "argc != 2", 10);
    }
    return (0);
}