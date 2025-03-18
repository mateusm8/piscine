/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:23:31 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/18 19:47:32 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_charset(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	if (!*charset)
		return (-1);
	while (str[i])
	{
		j = 0;
		if (str[i] == charset[j])
		{
			while (str[i + j] == charset[j] && charset[j] != '\0')
			{
				j++;
				if (charset[j] == '\0')
					count++;
			}
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**ptr;
	int		i;

	i = 0;
	ptr = (char *) malloc(ft_strlen(*str) - (count_charset(str, charset) * (ft_strlen(charset))) + );
}
