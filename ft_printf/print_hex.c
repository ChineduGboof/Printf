/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:24:09 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/29 10:26:57 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int num, char *digit)
{
	int	len;

	len = 0;
	if (num > 15)
		len += print_hex(num / 16, digit);
	len += write(1, &digit[num % 16], 1);
	return (len);
}
