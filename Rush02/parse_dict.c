/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:29:28 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/31 15:49:03 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_load_dict(void)
{
	int	file;

	file = open("numbers.dict", 0_RONLY);
	if (file == -1)
	{
		ft_putstr("Error", 2);
		exit(1);
	}
	return (file);
}

int	ft_load_dict(char *str)
{
	int	file;

	file = open(str, 0_RONLY);
	if (file == -1)
	{
		ft_putstr("Error", 2);
		exit(1);
	}
	return (file);
}




char *parse_dict(char *file)
{
	
	int file = ft_load_dict(file);

	char buff[1024];

	int bytes = read(file, buff, sizeof(file));
	//   ?

	normalize_buff(buff);

}
