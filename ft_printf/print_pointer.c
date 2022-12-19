/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:24:03 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/29 10:27:07 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long num, char *digit)
{
	int	len;

	len = 0;
	if (num > 15)
		len += print_pointer(num / 16, digit);
	len += write(1, &digit[num % 16], 1);
	return (len);
}
