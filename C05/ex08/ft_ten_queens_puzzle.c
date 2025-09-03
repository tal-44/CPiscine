/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:47:13 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/28 14:49:52 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Comprueba si se puede colocar una dama 
en la fila y columna pasados como parametros */
int	is_safe(int positions[10], int col, int row)
{
	int	prev_col;
	int	prev_row;

	prev_col = 0;
	while (prev_col < col)
	{
		prev_row = positions[prev_col];
		if (prev_row == row)
			return (0);
		if ((prev_row - row) == (prev_col - col))
			return (0);
		if ((row - prev_row) == (prev_col - col))
			return (0);
		prev_col++;
	}
	return (1);
}

void	print_solution(int positions[10])
{
	char	buf[11];
	int		i;

	i = 0;
	while (i < 10)
	{
		buf[i] = (char)('0' + positions[i]);
		i++;
	}
	buf[10] = '\n';
	write(1, buf, 11);
}

void	solve(int col, int positions[10], int *count)
{
	int	row;

	if (col == 10)
	{
		print_solution(positions);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(positions, col, row))
		{
			positions[col] = row;
			solve(col + 1, positions, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	positions[10];
	int	count;

	count = 0;
	solve(0, positions, &count);
	return (count);
}
/*



void	print_number(int n)
{
	char	buf[12];
	char	temp_c;
	int		len;
	int		i;

	len = 0;
	if (n == 0)
		buf[len++] = '0';
	else
	{
		while (n > 0)
		{
			buf[len++] = (char)('0' + (n % 10));
			n = n / 10;
		}
		i = 0;
		while (i < len)
		{
			temp_c = buf[i];
			buf[i] = buf[len - 1 - i];
			buf[len - 1 - i] = temp_c;
			i++;
		}
	}
	buf[len++] = '\n';
	write(1, buf, len);
}

int	main(void)
{
	int	total = ft_ten_queens_puzzle();
	print_number(total);
	return (0);
}*/
