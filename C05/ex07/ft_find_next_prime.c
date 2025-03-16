/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:58:22 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/10 20:39:48 by matmagal         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(1));
}*/