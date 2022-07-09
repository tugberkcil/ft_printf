/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:28:08 by mcil              #+#    #+#             */
/*   Updated: 2022/01/27 16:57:34 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*s1;

	i = 0;
	n = start;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) > len)
		s1 = (char *)malloc(len + 1);
	else
		s1 = (char *)malloc(ft_strlen(s) + 1);
	if (!s1)
		return (0);
	while (i < ft_strlen(s) && n < len + start)
	{
		s1[i] = s[n];
		i++;
		n++;
	}
	s1[i] = '\0';
	return (s1);
}
