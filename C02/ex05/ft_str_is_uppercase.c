/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 00:14:33 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/03 00:18:55 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABEFFEIIFJEF"));
	printf("%d\n", ft_str_is_uppercase("ABEFFEIIfegeF"));
	printf("%d\n", ft_str_is_uppercase("ABEFFgjrijrg"));
}*/
