/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:04:44 by elel-yak          #+#    #+#             */
/*   Updated: 2023/12/11 08:51:21 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ohhhhhyeeeh(va_list q, char c, int *i)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt += ft_putchar(va_arg(q, int));
	else if (c == 's')
		cnt += ft_putstr(va_arg(q, char *));
	else if (c == 'X')
		cnt += ft_putnbr_base(va_arg(q, unsigned int), HEX_UPPER);
	else if (c == 'x')
		cnt += ft_putnbr_base(va_arg(q, unsigned int), HEX_LOWER);
	else if (c == 'p')
		cnt += ft_putstr("0x") + ft_putnbr_base(va_arg(q, unsigned long),
				HEX_LOWER);
	else if (c == 'u')
		cnt += ft_putnbr(va_arg(q, unsigned int));
	else if (c == 'd' || c == 'i')
		cnt += ft_putnbr(va_arg(q, int));
	else if (c == '%')
		cnt += ft_putchar('%');
	else
		(*i)--;
	return (cnt);
}

int	ft_printf(const char *x, ...)
{
	va_list	z;
	int		nb;
	int		y;

	va_start(z, x);
	y = -1;
	nb = 0;
	while (x[++y])
	{
		if (x[y] == '%')
		{
			y++;
			if (!x[y])
				return (nb);
			nb += ft_ohhhhhyeeeh(z, x[y], &y);
		}
		else
			nb += ft_putchar(x[y]);
	}
	va_end(z);
	return (nb);
}

int main()
{
	printf("%s" , "");
}