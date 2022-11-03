/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 04:41:47 by drestrep          #+#    #+#             */
/*   Updated: 2022/11/03 05:24:23 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_header.h"

void	ft_putnbr(int nbr, int len)
{
	size_t	i;
	char	*n;

	i = 0;
	n = ft_itoa(nbr);
	while (n[i] != '\0')
	{
		ft_putchar(n[i], len);
	}
}
