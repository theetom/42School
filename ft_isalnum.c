/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:16:59 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/09 15:44:08 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
		if (('A' <= c && c <= 'Z')
			|| ('a' <= c && c <= 'z')
			|| ('0' <= c && c <= '9'))
			return (1);
		else
			return (0);
}

int	main(void)
{
	printf("%d\n", isalnum('B'));
	printf("%d\n", ft_isalnum('A'));
}