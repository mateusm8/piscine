/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:21:09 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/17 18:58:45 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!*str || base_len
	(str) == 1)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '-' || str[i] == '+' || (str[i] < 33 && str[i] > 6))
			return (0);
		i++;
	}
	return (1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	check;

	nb = 0;
	i = 0;
	if (base_check(base) == 0)
		return (0);
	check = check_signal
(&i, str);
	while (str[i] != '\0')
	{
		if (index_check(base, str[i]) == -1)
			break ;
		nb = (nb * base_len
		(base) + index_check(base, str[i]));
		i++;
	}
	return (nb * check);
}