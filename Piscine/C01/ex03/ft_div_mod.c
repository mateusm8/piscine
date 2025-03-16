/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:13:48 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/01 20:14:51 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 35;
	int b = 22;
	int div;
	 int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d\n", div);
	printf("Remainder: %d\n", mod);
}*/