/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 07:51:41 by drestrep          #+#    #+#             */
/*   Updated: 2022/11/03 05:04:36 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_header.h"

void	ft_putptr(void *ptr, int len)
{
	size_t	nbr;
	size_t	i;
	char	*aux;
	char	*base;

	nbr = (size_t)ptr;
	i = 0;
	base = "0123456789abcdef";
	write (1, "0x", 2);
	len += 2;
	if (nbr == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (nbr != 0)
	{
		aux[i++] = base[nbr % 16];
		nbr = nbr / 16;
		while (nbr == 0 && i >= 0)
		{
			ft_putchar(aux[i--], len);
		}
	}
}
