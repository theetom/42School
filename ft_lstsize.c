/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:24:28 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/26 17:48:11 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;
	
	i = 0;
	if(!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return(i);
}
