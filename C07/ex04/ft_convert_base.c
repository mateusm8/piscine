/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:52:26 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/20 00:56:10 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		index_check(char *base, char c);
int		base_check(char *base);
int		check_signal(int *i, char *str);
int		base_len(char	*str);
int		count_digits_in_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base, char *ptr)
{
	int		len_base;
	long	nb;
	int		i;

	nb = nbr;
	i = count_digits_in_base(nbr, base);
	len_base = base_len(base);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
		i++;
	}
	ptr[i] = '\0';
	while (i > 0)
	{
		i--;
		if (ptr[i] != '-')
		{
			ptr[i] = base[nb % len_base];
			nb /= len_base;
		}
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	check;

	nb = 0;
	i = 0;
	check = check_signal(&i, str);
	while (str[i] != '\0')
	{
		if (index_check(base, str[i]) == -1)
			break ;
		nb = (nb * base_len(base)) + index_check(base, str[i]);
		i++;
	}
	return (nb * check);
}

int	count_digits_in_base(int nbr, char *base)
{
	int		len_base;
	int		count;
	long	nb;

	count = 0;
	len_base = base_len(base);
	nb = nbr;
	if (len_base <= 0)
		return (-1);
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= len_base;
		count++;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	int		digits;
	char	*ptr;

	if (base_check(base_from) == 0 || base_check(base_to) == 0)
		return (NULL);
	nbr_int = ft_atoi_base(nbr, base_from);
	digits = count_digits_in_base(nbr_int, base_to);
	if (nbr_int < 0)
	{
		digits++;
		ptr = (char *) malloc(digits + 1);
		if (ptr == NULL)
			return (NULL);
	}
	else
	{
		ptr = (char *) malloc(digits + 1);
		if (ptr == NULL)
			return (NULL);
	}
	ft_putnbr_base(nbr_int, base_to, ptr);
	return (ptr);
}

/*int	main(void)
{
	printf("%s\n", ft_convert_base("-10", "0123456789", "01"));
}*/