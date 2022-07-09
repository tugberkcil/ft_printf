/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:39:16 by mcil              #+#    #+#             */
/*   Updated: 2022/02/02 16:47:53 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_special(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int	ft_wordcounter(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	if (s[0] != c && s[0])
		count++;
	i = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	if (!s)
		return (0);
	str = malloc(ft_wordcounter(s, c) * sizeof(char *) + 1);
	if (!str)
		return (0);
	j = 0;
	i = 0;
	while (s[i])
	{
		if ((i > 0 && s[i] != c && s[i - 1] == c)
			|| (s[i] != c && s[i] && i == 0))
		{
			str[j] = malloc(ft_strlen_special(s + i, c) + 1);
			ft_strlcpy(str[j++], s + i, ft_strlen_special(s + i, c) + 1);
		}
		i++;
	}
	str[j] = (void *)0;
	return (str);
}
