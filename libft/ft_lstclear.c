/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:03:25 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 13:05:08 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*r;

	if (!*lst)
		return ;
	while (*lst)
	{
		r = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = r;
	}
	*lst = 0;
}		
