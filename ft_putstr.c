/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 04:30:56 by drestrep          #+#    #+#             */
/*   Updated: 2022/10/28 07:06:31 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_header.h"

void	ft_putstr(char *str, int len)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		len += 6;
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i], len);
		i++;
	}
}
