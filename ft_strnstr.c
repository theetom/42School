/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:27:24 by etom              #+#    #+#             */
/*   Updated: 2024/04/13 00:44:12 by etom             ###   ########.fr       */
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
	while (big[i] && i < len - 1 && little[i])
	{
		if (little[0] == big[i])
		{
			j = i;
			while (little[j] && little[j] == big[j] && big[j] && j < len - 1)
				j++;
			if (little[j - 1] == big[j - 1] && little[j] == '\0')
				return (&bbig[i]);
		}
		i++;
	}
	return (0);
}

int main(void) 
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dol", 30));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
}
