/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:27:24 by etom              #+#    #+#             */
/*   Updated: 2024/05/02 13:02:03 by toferrei         ###   ########.fr       */
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
	while (big[i] && i < len)
	{
		if (little[0] == big[i])
		{
			j = 0;
			while (little[j] && little[j] == big[i] && big[i] && i < len)
			{
				j++;
				i++;
			}
			if (little[j - 1] == big[i - 1] && little[j] == '\0' && i <= len)
				return (&bbig[i - j]);
			i -= j;
		}
		i++;
	}
	return (0);
}

/* int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
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
	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s\n", ft_strnstr(haystack, "aaabc", 5));
	printf("%s\n", ft_strnstr(haystack, "abcd", 9));
	printf("%s\n", ft_strnstr(haystack, "a", 1));
}
 */