/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:23:53 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 17:23:54 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*snew;
	size_t	i;
	size_t	n;
	size_t	c;
	size_t	f;

	n = 0;
	c = 0;
	f = 0;
	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	snew = (char *)malloc(i + 1);
	if (!snew)
		return (0);
	while (c < ft_strlen(s1))
		snew[f++] = s1[c++];
	while (n < ft_strlen(s2))
		snew[f++] = s2[n++];
	snew[f] = '\0';
	return (snew);
}
