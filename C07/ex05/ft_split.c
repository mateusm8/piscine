/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:23:31 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/19 22:57:51 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

 char *cpy_str(char *str, char *sep)
 {
	int		i;
	int		j;
	char	*strs;

	i = 0;
	while (str[i] && !check_sep(str[i], sep))
		i++;
	strs = (char *) malloc((i + 1) * sizeof(char));
	if (strs == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		strs[j] = str[j];
		j++;
	}
	strs[j] = '\0';
	return (strs);
 }

char	**add_array(char **strs, char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], sep))
			i++;
		if (str[i] && !check_sep(str[i], sep))
		{
			strs[j] = cpy_str(str + i, sep);
			if (strs[j] == NULL)
				return (NULL);
			j++;
			while (str[i] && !check_sep(str[i], sep))
				i++;
		}
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	char	**strs;

	i = count_str(str, sep);
	strs = (char **) malloc((i + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	return (add_array(strs, str, sep));
}
