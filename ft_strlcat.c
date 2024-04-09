/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:08:49 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/09 13:08:52 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *dest)
{
	int	n;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sizedest;
	unsigned int	sizesrc;
	unsigned int	i;

	i = 0;
	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	if (size <= sizedest || size == 0)
		return (sizesrc + size);
	while (src[i] && sizedest + i < (size - 1))
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (sizedest + sizesrc);
}