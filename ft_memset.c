/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:12:36 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/11 18:34:01 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;

	i = 0;
	while (((char *)s)[i] && i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*int main (void)
{
	int i = 0;
	
	int s[10]= {0, 1, 2 , 3, 4, 5, 6, 7, 8, 9};
	int *res1 = memset(s, 1, 4);
	int *res2 = ft_memset(s, 1, 4);
	while (i < 10)
	{
		printf("%d", s[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 10)
	{
		printf("%d", res1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 10)
	{
		printf("%d", res2[i]);
		i++;
	}
} */