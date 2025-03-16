	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:46:41 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/03 22:13:35 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = size - 1;
	while (i < k)
	{
		j = tab[i];
		tab[i] = tab[k];
		tab[k] = j;
		i++;
		k--;
	}
}

/*
int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	int	i = 0;
	int	j = 0;

	printf("Before: \n");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	printf("After: \n");
	ft_rev_int_tab(tab, size);
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
}
*/
