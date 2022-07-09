/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:17:46 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 13:18:59 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a1;
	char	*a2;
	size_t	i;

	a1 = (char *) s1;
	a2 = (char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (a1[i] == a2[i])
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return ((unsigned char)(a1[i]) - (unsigned char)(a2[i]));
}
