/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:08:49 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/10 16:02:58 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned long	sizedest;
	unsigned long	sizesrc;
	unsigned long	i;

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