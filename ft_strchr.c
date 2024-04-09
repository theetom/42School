/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:39:57 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/09 15:21:54 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == '\0')
		return (0);
	return ((char *)s);
}

/* int	main(void)
{
	printf("%s\n", strchr("Aqui ha gato", 's'));
	printf("%s\n", ft_strchr("Aqui ha gato", 's'));
}
*/