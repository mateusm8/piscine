/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:46:55 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/10 20:23:46 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	haystack[] = "ola, tudo bem? 42palavras
	quarenta-e-duas; cinquenta+e+um";
	char	needle[] = "quinto";
	char	*result = ft_strstr(haystack, needle);
	
	if (result != NULL)
		printf("Encontrado %s em %s na posicao:
		%ld\n", needle, haystack, result - haystack);
	else
		printf("%s nao encontrado em %s\n", needle, haystack);
}*/