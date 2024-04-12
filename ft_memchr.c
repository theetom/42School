/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:02:14 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/12 19:20:42 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*is;

	is = (char *)s;
	while (n - 1 > 0 && *is != (char)c)
	{
		is++;
		n--;
	}
	if (*is == c)
		return ((void *)is);
	else
		return (NULL);
}

/* int	main(void)
{
	char *res1 = "Aqui ha gat300o";
	printf("%s\n", (char*)memchr(res1, 300, 300));
	printf("%s\n", (char*)ft_memchr(res1, 300, 300));
}
 */