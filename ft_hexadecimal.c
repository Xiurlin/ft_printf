/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 06:19:54 by drestrep          #+#    #+#             */
/*   Updated: 2023/04/14 05:48:26 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(int nbr, int len, char c)
{
	int		i;
	char	*base;

	i = 0;
	base = NULL;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (nbr > 9)
	{
		ft_hexadecimal(nbr / 10, len, c);
		nbr = nbr % 10;
		i++;
	}
	ft_putchar(base[i], len);
}
