/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 23:27:11 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/18 01:02:39 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strslen(char **strs, char *sep, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	total += 1;
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;

	i = 0;
	if (size == 0)
	{
		ptr = (char *) malloc(sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *) malloc(strslen(strs, sep, size));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		i++;
		if (i < size)
			ft_strcat(ptr, sep);
	}
	return (ptr);
}

/*int main(void)
{
    // Teste 1: size > 0
    char *strs[] = {"Hello", "World", "C", "Programming"};
    char *sep = ", ";
    char *result = ft_strjoin(4, strs, sep);
    if (result != NULL)
    {
        printf("Resultado: %s\n", result);
        free(result);
    }
    else
    {
        printf("Erro: Falha na alocação de memória.\n");
    }

    // Teste 2: size == 0
    char *empty_result = ft_strjoin(0, NULL, NULL);
    if (empty_result != NULL)
    {
        printf("Resultado (size == 0): %s\n", empty_result);
        free(empty_result);
    }
    else
    {
        printf("Erro: Falha na alocação de memória.\n");
    }
}*/