/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:00:49 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 13:00:52 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*r;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	r = ft_lstlast(*lst);
	r->next = new;
}	
