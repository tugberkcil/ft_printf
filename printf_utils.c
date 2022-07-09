/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <mcil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:05:01 by mcil              #+#    #+#             */
/*   Updated: 2022/02/26 15:43:10 by mcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putpointer(void *ptr)
{
	unsigned long	ret;
	int				res;

	ret = (unsigned long)ptr;
	res = 0;
	if (ret > 15)
		res += ft_putpointer((void *)(ret / 16));
	res += ft_putchar("0123456789abcdef"[ret % 16]);
	return (res);
}

int	ft_putnbr(int number)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(number);
	len += ft_putstr(num);
	free(num);
	return (len);
}
