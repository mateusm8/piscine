/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:16:56 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/07 12:20:51 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	buffer_size;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	buffer_size = size - destlen - 1;
	if (size <= destlen)
		return (size + srclen);
	while (src[i] && i < buffer_size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

/*int main() {
	char destino[20] = "Hello, ";
	char origem[] = "world!";
	unsigned int	size = 150;
	unsigned int	resultado = ft_strlcat(destino, origem, size);

	printf("String resultante: %s\n", destino);
	printf("Comprimento total: %u\n", resultado);
}*/
