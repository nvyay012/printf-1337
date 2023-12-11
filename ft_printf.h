/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:22:49 by hbarda            #+#    #+#             */
/*   Updated: 2023/12/11 12:51:51 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_base(unsigned long nb, char *base);
int	ft_putnbr(long n);
int	ft_ohhhhhyeeeh(va_list q, char c, int *i);
int	ft_printf(const char *fmt, ...);
size_t	ft_strlen(char *str);

#endif
