/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:35:24 by drestrep          #+#    #+#             */
/*   Updated: 2023/04/14 07:30:09 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(char const *str, ...);
void	ft_datatype(va_list list, char c, int len);
void	ft_putchar(char c, int len);
void	ft_putstr(char *str, int len);
void	ft_putptr(void *ptr, int len);
void	ft_putnbr(int nbr, int len);
void	ft_unsigned_int(int var, int len);
void	ft_hexadecimal(int nbr, int len, char c);

#endif