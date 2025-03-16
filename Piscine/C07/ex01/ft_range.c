/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:05:44 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/13 21:34:10 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	ptr = (int *) malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	int	*ptr;
	int	i;
	int	min;
	int	max;

	i = 0;
	max = 5;
	min = 0;
	ptr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", ptr[i]);
		i++;
	}
}*/