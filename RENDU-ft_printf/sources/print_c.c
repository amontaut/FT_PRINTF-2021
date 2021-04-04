/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:18:27 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:55:09 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** This function treats all flags before a c, prints them, and prints the c.
*/

void	arg_is_c(t_flags *flags, int *return_value, va_list args,
		char c)
{
	int		value_c;
	size_t	len_value_c;
	char	*value_itoa;
	int		bool_dot;

	bool_dot = 0;
	value_itoa = NULL;
	treat_flag(flags, &bool_dot, &value_itoa, args);
	if (c == '%')
		value_c = '%';
	else
		value_c = va_arg(args, int);
	len_value_c = 1;
	common_width(flags, &len_value_c, return_value);
	common_zero(flags, len_value_c, return_value);
	common_dot(flags, len_value_c, return_value);
	ft_putchar(value_c);
	(*return_value)++;
	common_minus(flags, len_value_c, return_value);
}
