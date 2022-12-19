/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 06:34:35 by cegbulef          #+#    #+#             */
/*   Updated: 2022/11/29 10:29:08 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_hex(unsigned int num, char *digit);
int	print_nbr(int num);
int	print_pointer(unsigned long num, char *digit);
int	print_string(char *str);
int	print_udecimal(unsigned int num);

#endif