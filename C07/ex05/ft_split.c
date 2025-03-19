/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:23:31 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/19 00:18:19 by matmagal         ###   ########.fr       */
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

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], sep))
			i++;
		if (str[i] && !check_sep(str[i], sep))
		{
			count++;
			while (str[i] && !check_sep(str[i], sep))
				i++;
		}
	}
	return (count);
}

char **alocmem(char *str, char **ptr, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == sep[j] && sep[j] != '\0')
		{
			j++;
			if (sep[j] == '\0')
		}
	}
}

char	**ft_split(char *str, char *sep)
{
	char	**ptr;
	int		i;
	
	i = 0;
	ptr = (char **) malloc((c_str(str, sep) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

}
