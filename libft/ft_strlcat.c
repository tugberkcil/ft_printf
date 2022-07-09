/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:52:17 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 18:20:29 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	c;
	size_t	d;
	char	*ds;
	char	*sr;

	ds = (char *)dst;
	sr = (char *)src;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(ds);
	d = 0;
	while (sr[d] != '\0' && c + 1 < dstsize)
	{
		ds[c] = sr[d];
		c++;
		d++;
	}
	ds[c] = '\0';
	return (ft_strlen(ds) + ft_strlen(&sr[d]));
}
