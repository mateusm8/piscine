/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:39:50 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/01 19:57:37 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		ft_putchar(alpha);
		alpha++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
