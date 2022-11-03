/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:02:54 by drestrep          #+#    #+#             */
/*   Updated: 2022/11/03 04:42:59 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_header.h"

int	ft_printf(char const *str, ...)
{
	int	i;
	int	len;
	va_list	ap;

	i = 0;
	len = 0;

	va_start (ap, str);
	while (str[i] != '0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_datatype(ap, &str[i]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			len++;
		}
	}
	va_end (ap);
	return (len);
}

int	ft_datatype(va_list list, char c)
{
	int len;

	len = 0;
	if (c == 'c')
	{
		ft_putchar(va_arg(list, char));
	}
	else if (c == 's')
	{
		ft_putstr(va_arg(list, char *), int len);
	}
	else if (c == 'p')
	{
		ft_putptr(va_arg(list, void *), int len);
	}
	else if (c == 'i' || c == 'd' )
	{
		ft_putnbr(va_arg(list, int), int len);
	}
	else if (c == 'u')
	{
	}
	else if (c == 'x')
	{
	}
	else if (c == 'X')
	{
	}
}
