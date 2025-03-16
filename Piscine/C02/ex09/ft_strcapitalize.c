/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 00:38:03 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/08 18:14:25 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (str[i])
	{
		if (check == 0 && str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			check = 1;
		}
		else if (check == 0 && str[i] > 64 && str[i] < 91)
			check = 1;
		else if (check == 1 && str[i] > 64 && str[i] < 91)
			str[i] += 32;
		else if (check == 1 && (str[i] < 48 || (str[i] > 57 && str[i] < 65)
				|| (str[i] > 90 && str[i] < 97) || str[i] > 122))
			check = 0;
		else if (check == 0 && str[i] > 47 && str[i] < 58)
			check = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
}*/
