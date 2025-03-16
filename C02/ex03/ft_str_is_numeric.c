/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 23:45:36 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/05 21:16:19 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("1234{5678976"));
	printf("%d\n", ft_str_is_numeric("12345678976"));
	printf("%d\n", ft_str_is_numeric("1234FRG5678976"));

}*/