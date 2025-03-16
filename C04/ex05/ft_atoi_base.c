/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:21:09 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/14 23:28:38 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
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

int	check_signal(char *str, int *j)
{
	int	signal;
	int	i;

	signal = 0;
	i = 0;
	while (str[i] < 33 && str[i] > 6)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal += 1;
		i++;
	}
	*j = i;
	if (signal % 2 != 0)
		return (-1);
	return (1);
}

int	index_atoi(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
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
	int	signal;

	i = 0;
	nb = 0;
	if (base_check(base) == 0)
		return (0);
	signal = check_signal(str, &i);
	while (str[i])
	{
		if (index_atoi(base, str[i]) == -1)
			break ;
		nb = (nb * base_len(base) + index_atoi(base, str[i]));
		i++;
	}
	return (nb * signal);
}

/*int	main(void)
{
	char	str[] = "1000001";
	
	printf("%d\n", ft_atoi_base(str, "01"));
}*/