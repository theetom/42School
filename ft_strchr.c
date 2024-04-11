/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:39:57 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/11 19:33:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (c == '\0')
		return ((char *)s);
	if (*s == '\0')
		return (0);
	else
		return ((char *)s);
}

/* int	main(void)
{
	printf("%s\n", strchr("Aqui ha gato", '\0'));
	printf("%s\n", ft_strchr("Aqui ha gato", '\0'));
}
 */