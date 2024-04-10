/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:32:49 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:46:17 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, int n)
{
	unsigned long	i;

	i = 0;
	while (((int *)src)[i] && i < n)
	{
		((int *)dest)[i] = ((int *)src)[i];
		i++;
	}
	return (dest);
}

/* int main (void)
{
	int i = 0;
	
	char s[]= {"o que quero que copies"};
	char d[] = "bbsdjbfjhdsbfd";
	char *res1 = memcpy(d, s, sizeof(char) * 4);
	char *res2 = ft_memcpy(d, s, sizeof(char) * 4);

	int s[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int d[]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int *res1 = memcpy(d, s, sizeof(int) * 4);
	int *res2 = ft_memcpy(d, s, sizeof(int) * 4);

	printf("%s\n", res1);
	printf("%s\n", res2);
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