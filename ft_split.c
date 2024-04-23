/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:30:28 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/23 17:58:54 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	safe_malloc(char **res, int position, size_t buffer)
{
	res[position] = (char *)malloc(sizeof(char) * buffer);
	if (!res[position])
		{
			while (position > 0)
			{
				free(res[position]);
				position--;
			}
			free(res);
			return (1);
		}
	return (0);
}

static	int fill(char **res, char const *s, char c)
{
	int	i;
	int	len;
	
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c)
		{
			len++;
			s++;
		}	
		if (len)
		{
			if (safe_malloc(res, i, len + 1))
				return (1);
			ft_strlcpy(res[i], s  - len, len + 1);
		}
		i++;
	}
	return (0);	
}

static int	word_counter(char const *s, char c)
{
	int i;
	int	count;
	int x;

	i = 0;
	x = 0;
	count = 0;
	while(*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	words = word_counter(s, c);
	res = malloc(sizeof(s) * (words + 1));
	if (!res)
		return (0);
	res[words] = NULL;
	if (fill (res, s, c))
		return (NULL);
	return (res);
	
	/* n = 0;
	
			res[x][y] = s[n];
			n++;
			y++;
		}
		n++;
	} */





	
}
