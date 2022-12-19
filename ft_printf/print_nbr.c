/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:24:06 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/29 10:26:52 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int num)
{
	int		len;
	char	*digit;

	digit = "0123456789";
	len = 0;
	if (num == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (num < 0)
	{
		num *= -1;
		len += write (1, "-", 1);
	}
	if (num > 9)
		len += print_nbr(num / 10);
	len += write(1, &digit[num % 10], 1);
	return (len);
}
