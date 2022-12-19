/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:05:32 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/30 09:46:02 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	track the return value of each write statement (len)
	This gives you how many characters were printed
	the stdarg contains the va_list, va_arg that enables us to 
	track a number of arguments (...) passed in the printf funtion
	pointers are displayed as hexadecimals 
*/

#include "ft_printf.h"

int	print_type(va_list args, char *format, int i)
{
	int		len;

	len = 0;
	if (format[i] == 'c')
		len = print_char(va_arg(args, int));
	else if (format[i] == '%')
		len = print_char('%');
	else if (format[i] == 's')
		len = print_string(va_arg(args, char *));
	else if (format[i] == 'd' || format[i] == 'i')
		len = print_nbr(va_arg(args, int));
	else if (format[i] == 'x')
		len = print_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format[i] == 'X')
		len = print_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format[i] == 'u')
		len = print_udecimal(va_arg(args, unsigned int));
	else if (format[i] == 'p')
	{
		len += write(1, "0x", 2);
		len += print_pointer(va_arg(args, unsigned long), "0123456789abcdef");
	}	
	return (len);
}

int	parse_format(va_list args, char *format)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
			len += write(1, &format[i++], 1);
		if (format[i] == '%' && format[++i] != '\0')
			len += print_type(args, format, i);
		if (format[i] == '\0')
			break ;
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = parse_format(args, (char *)format);
	va_end(args);
	return (len);
}
