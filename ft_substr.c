/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:28:37 by etom              #+#    #+#             */
/*   Updated: 2024/04/20 23:14:38 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*sub;

	n = 0;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (len > 0 && s[n])
	{
		sub[n] = s[start + n];
		n++;
		len --;
	}
	sub[n] = '\0';
	return (sub);
}

/*int	main(void)
{
	char s[] = "Aqui ha gato";
	char *res = ft_substr(s, 1, 10);
	printf("%s", res);
}*/