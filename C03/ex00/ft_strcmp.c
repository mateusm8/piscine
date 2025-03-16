/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:37:38 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/05 21:38:39 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "World";
	char	s2[] = "World";
	int		diff;
	
	diff = ft_strcmp(s1, s2);
	printf("%d\n", diff);
}*/