/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:24:32 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/13 18:26:37 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	while (i < size * nmemb)
		ptr[i++] = 0;
	return (ptr);
}
