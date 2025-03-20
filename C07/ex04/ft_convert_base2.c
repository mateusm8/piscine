/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:58:08 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/20 00:23:24 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_signal(int *i, char *str)
{
	int	j;
	int	check;

	j = 0;
	check = 0;
	while ((str[j] > 8 && str[j] < 14) || str[j] == 32)
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			check++;
		j++;
	}
	*i = j;
	if (check % 2 == 1)
		return (-1);
	return (1);
}

int	index_check(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!*base || base_len(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
