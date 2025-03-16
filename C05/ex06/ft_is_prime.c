/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:26:24 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/12 19:33:55 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	index;
	int	i;

	index = 0;
	i = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			index++;
		i++;
	}
	if (index == 2)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(4));
}*/