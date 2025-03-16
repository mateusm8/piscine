/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:47:17 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/10 20:38:46 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	else if (nb == 1 || power == 1)
		return (nb);
	if (power > 1)
		result = result + (nb * ft_recursive_power(nb, power - 1));
	return (result);
}
