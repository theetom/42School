/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:27:24 by etom              #+#    #+#             */
/*   Updated: 2024/04/12 22:54:24 by etom             ###   ########.fr       */
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
	j = 0;
	if (sizeof(little) == 0)
		return (bbig);
	while (big[i] && i < len - 1)
	{
		while (little[j] && little[j] == big[j] && big[j])
			j++;
		if (little[j] == '\0' && big[j] == '\0')
				return (&bbig [i]);
		j = 0;
	}
	return (0);
}

int main() 
{
    // Test strings
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = strlen(haystack);

    // Call the ft_strnstr function
    char *result = ft_strnstr(haystack, needle, len);

    // Check if needle was found
    if (result != NULL) {
        printf("Needle found at position: %ld\n", result - haystack);
    } else {
        printf("Needle not found\n");
    }

    return 0;
}
