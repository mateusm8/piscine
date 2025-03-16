/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:23:44 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/02 18:42:59 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_print_combx(int row_1, int row_2, int row_3)
{
	row_1 = '0';
	while (row_1 <= '7')
	{
		row_2 = row_1 + 1;
		while (row_2 <= '8')
		{
			row_3 = row_2 + 1;
			while (row_3 <= '9')
			{
				ft_putchar(row_1, row_2, row_3);
				if (!(row_1 == '7' && row_2 == '8' && row_3 == '9'))
					write(1, ", ", 2);
				row_3++;
			}
			row_2++;
		}
		row_1++;
	}
}

void	ft_print_comb(void)
{
	ft_print_combx('0', '0', '0');
}
/*
int	main(void)
{
	ft_print_comb();
}
*/