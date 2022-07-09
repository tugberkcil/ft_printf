/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <42istanbul.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:54:30 by mcil              #+#    #+#             */
/*   Updated: 2022/01/20 18:42:43 by mcil             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(long n)
{
	int	size;

	if (n > 0)
		size = 0;
	else if (n < 0)
		size = 1;
	else if (n == 0)
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static	int	ft_number(long n)
{
	if (n < 0)
		n = -n;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	size = ft_size(n);
	nbr = ft_number(n);
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	str = (char *)malloc(size + 1);
	if (!(str))
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
