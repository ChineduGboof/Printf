/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:23:51 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/29 10:27:15 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		len += write(1, &str[i], 1);
		i++;
	}
	return (len);
}
