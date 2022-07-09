/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:11:41 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 18:21:20 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char	*ds;
	char	*sr;
	size_t	i;
	size_t	srclen;

	i = 0;
	ds = (char *)dst;
	sr = (char *)src;
	srclen = ft_strlen(sr);
	if (!dstsize)
		return (srclen);
	if (dstsize != 0)
	{
		while (sr[i] != '\0' && i < (dstsize - 1))
		{
			ds[i] = sr[i];
			i++;
		}
	ds[i] = '\0';
	}	
	return (srclen);
}
