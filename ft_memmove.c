/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:53:07 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/11 13:54:24 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	int				temp[n];

	i = 0;
	while (((int *)src)[i] && i < n)
	{
		temp[i] = ((int *)src)[i];
		i++;
	}
	i = 0;
 	while (((int *)src)[i] && i < n)
	{
		((int *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
