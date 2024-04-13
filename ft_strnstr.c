/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:27:24 by etom              #+#    #+#             */
/*   Updated: 2024/04/13 15:56:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bbig;

	bbig = (char *)big;
	i = 0;
	if (ft_strlen(little) == 0)
		return (bbig);
	while (big[i] && i + 1 < len)
	{
		if (little[0] == big[i])
		{
			j = 0;
			while (little[j] && little[j] == big[i] && big[i] && i + 1 < len)
			{
				j++;
				i++;
			}
			if (little[j - 1] == big[i - 1] && little[j] == '\0' && i + 1 < len)
				return (&bbig[i - j]);
			i -= (j - 1);
		}
		i++;
	}
	return (0);
}
