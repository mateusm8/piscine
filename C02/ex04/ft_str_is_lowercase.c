/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 23:52:39 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/02 23:57:37 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("38yr3189fh1"));
	printf("%d\n", ft_str_is_lowercase("fjefefhwefiuw"));
	printf("%d\n", ft_str_is_lowercase("JFEIFJfejif"));
}*/
