/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcil <mcil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:04:24 by mcil              #+#    #+#             */
/*   Updated: 2022/02/26 16:41:14 by mcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

int		ft_putstr(char *str);
int		ft_printf(const char *sign, ...);
int		ft_putchar(char c);
int		ft_putpointer(void *ptr);
int		ft_putnbr(int number);
char	*ft_convert(unsigned int num, char *set);

#endif
