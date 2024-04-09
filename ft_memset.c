/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:12:36 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/09 15:57:52 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	*ft_memset(char *s, int c, size_t n)
{
	unsigned long	i;

	i = 0;
	while (s[i] && i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

int main (void)
{
	char * s = "Nao sei++";
	printf("%p", s);
	
	printf("%p", ft_memset(s, 's', sizeof (char) * 10));
}