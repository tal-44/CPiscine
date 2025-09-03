/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:53:26 by gbarreto          #+#    #+#             */
/*   Updated: 2025/08/31 23:15:49 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	normalize_buff(char src[1024], t_dict dict);

int	main(int argc, char **argv)
{
	t_dict	dict;
	char	**triades;
	char	*buffer;

	buffer = malloc((1024) * sizeof(char *));
	dict.size = 0;
	if (argc == 2)
	{
		ft_parse_nbr(argv[1]);
		triades = ft_triades(argv[1], ft_strlen(argv[1]));
		buffer = parse_dict("numbers.dict", buffer);
	}
	else if (argc == 3)
	{
		ft_parse_nbr(argv[2]);
		triades = ft_triades(argv[2], ft_strlen_two(&argv[2]));
		buffer = parse_dict(argv[2], buffer);
	}
	else
	{
		ft_putstr("ERROR AL CARGAR LOS ARGUMENTOS", 2);
		exit(1);
	}
	normalize_buff(buffer, dict);
	print_triades(&dict, triades);
		ft_putstr("fin programa", 2);
		return (0);
}
