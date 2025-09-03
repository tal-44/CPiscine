/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42Madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:30:12 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/20 20:29:27 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
nt	main(void)
{
	char src1[11] = "Hola mundo";
	char dest1[11] = "";

	printf("%s\n", ft_strcat(dest1, src1));

	char dest2[11] = "Hola mundo";
	char src2[11] = "";

	printf("%s\n", ft_strcat(dest2, src2));

	char src3[11] = "";
	char dest3[11] = "";

	printf("%s\n", ft_strcat(dest3, src3));
	

	char src4[11] = "Hola";
	char dest4[11] = "Mundo";

	printf("%s\n", ft_strcat(dest4, src4));


}*/
