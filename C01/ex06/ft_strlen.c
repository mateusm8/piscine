/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:43:59 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/01 20:44:58 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int	main(void)
{
	char *str = "Hello!";
	int	len;
	len = ft_strlen(str);
	printf("String: %s\n", str);
	printf("Length: %d\n", len);
}*/