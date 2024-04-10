/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:53:07 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/10 16:01:51 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	
	int *temp[n];
	i = 0;
	while (((int *)src)[i] && i < n)
	{
		temp[i] = ((int *)src)[i];
		((int *)dest)[i] = temp[i];
	}
	return (dest);
}