/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:19:04 by mcil              #+#    #+#             */
/*   Updated: 2022/01/27 15:09:10 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	nlen;

	nlen = ft_strlen(needle);
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		c = 0;
		while (haystack[i + c] != '\0' && needle[c] != '\0'
			&& i + c < len && haystack[i + c] == needle[c])
			c++;
		if (c == nlen)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
