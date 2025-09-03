/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:52:43 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/20 21:16:21 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src1[11] = "Hola mundo";
	char dest1[11] = "";

	printf("%s\n", ft_strncat(dest1, src1, 5));

	char dest2[11] = "Hola mundo";
	char src2[11] = "";

	printf("%s\n", ft_strncat(dest2, src2, 5));

	char src3[11] = "";
	char dest3[11] = "";

	printf("%s\n", ft_strncat(dest3, src3, 1));
	

	char src4[11] = "Hola";
	char dest4[11] = "Mundo";

	printf("%s\n", ft_strncat(dest4, src4, 0));


}*/
