/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_udecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:24:16 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/29 10:27:23 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_udecimal(unsigned int num)
{
	int		len;
	char	*digit;

	digit = "0123456789";
	len = 0;
	if (num > 9)
		len += print_udecimal(num / 10);
	len += write(1, &digit[num % 10], 1);
	return (len);
}
