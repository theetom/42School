/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:11:56 by etom              #+#    #+#             */
/*   Updated: 2024/05/02 16:22:25 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chrchk(char c, char const *set)
{
	int	n;

	n = 0;
	while (set[n])
	{
		if (set[n] == c)
			return (1);
		n++;
	}
	return (0);
}

static char	*nstr(char const *s1, int d, int e, int k)
{
	char	*cpy;
	int		c;

	cpy = ft_calloc(1, (k - (d + e) + 1));
	if (!cpy)
		return (0);
	c = 0;
	while (c < k - (d + e))
	{
		cpy[c] = s1[d + c];
		c++;
	}
	cpy[c] = '\0';
	return (cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		d;
	int		e;
	int		k;

	c = 0;
	d = 0;
	e = 0;
	k = ft_strlen(s1);
	if (!s1)
		return ((char *)s1);
	while (chrchk(s1[c], set) == 1)
	{
		c++;
		d++;
	}
	c = ft_strlen(s1) - 1;
	while (chrchk(s1[c], set) == 1)
	{
		c--;
		e++;
	}
	return (nstr(s1, d, e, k));
}
