/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:22:09 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/12 19:54:05 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	
	while (n - 1 > 0 && (unsigned char *)s1 == (unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0 || s1 - s2 == 0)
		return (0);
	if ((unsigned char *)s1 < (unsigned char *)s2)
		return (1);
	else
		return (-1);
}

int main (void)
{
	
	printf("%d\n", ft_memcmp("salut", "salut", 5));
	printf("%d\n\n",  memcmp("salut", "salut", 5));
	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
	printf("%d\n\n",  memcmp("t\200", "t\0", 2));
	printf("%d\n", ft_memcmp("testss", "test", 5));
	printf("%d\n\n",  memcmp("testss", "test", 5));
	printf("%d\n", ft_memcmp("test", "tEst", 4));
	printf("%d\n\n",  memcmp("test", "tEst", 4));
	printf("%d\n", ft_memcmp("", "test", 4));
	printf("%d\n\n",  memcmp("", "test", 4));
	printf("%d\n", ft_memcmp("test", "", 4));
	printf("%d\n\n",  memcmp("test", "", 4));
	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n\n",  memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));
	printf("%d\n\n",  memcmp("abcdefgh", "abcdwxyz", 6));
	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("%d\n",    memcmp("zyxbcdefgh", "abcdefgxyz", 0));
}