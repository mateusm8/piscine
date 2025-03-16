/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 00:20:41 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/07 12:20:41 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] < 31 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable("ABEFFEIIFJEF"));
	printf("%d\n", ft_str_is_printable("ABEFFE\nIIfegeF"));
	printf("%d\n", ft_str_is_printable("ABEFFgj\rijrg"));
}*/