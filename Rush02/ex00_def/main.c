/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:53:26 by gbarreto          #+#    #+#             */
/*   Updated: 2025/08/31 20:26:22 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	normalize_buff(char src[1024], t_dict dict);

int	main(int argc, char *argv[])
{
	t_dict	dict;
	char	*triades;
	char	buffer[1024];

	dict.size = 0;
	if (argc == 2)
	{
		ft_parse_nbr(argv[1]);
		triades = ft_triades(argv[1], ft_strlen(argv[1]));
		parse_dict("numbers.dict", buffer);
	}
	else if (argc == 3)
	{
		ft_parse_nbr(argv[2]);
		triades = ft_triades(argv[2], ft_strlen_two(argv[2]));
		parse_dict(argv[2], buffer);
	}
	else
	{
		ft_putchar_err("ERROR", 2);
	}
	normalize_buff(buffer, dict);
	print_triades(dict, triades);
}
