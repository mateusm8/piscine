/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:11:20 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/01 20:12:31 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int x = 22;
	int y = 35;

	printf("Before: x = %d, y = %d\n", x,y);
	ft_swap(&x,&y);
	printf("After: x = %d, y = %d\n", x,y);
	return 0;
}
*/