/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:59:07 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/12 16:24:58 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c || c == '\0')
		return ((char *)(s + i));
	else
		return (NULL);
}

/* int	main(void)
{
	printf("%s\n", strrchr("bonjour", 'z'));
	printf("%s", ft_strrchr("bonjour", 'z'));
}
 */