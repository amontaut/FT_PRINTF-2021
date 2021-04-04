/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:24:28 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:55:17 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_int_next(t_flags *flags, int value_d, char *value_itoa, \
		int *return_value)
{
	if (((flags->wcd_flag == NULL) && (flags->str_flag != NULL && \
					ft_strstr(flags->str_flag, ".") != NULL) && \
				ft_strstr(flags->str_flag, ".1") == 0 && value_d == 0 && \
				((flags->dot != NULL && (ft_strlen(flags->dot) == 0)) || \
				flags->dot == NULL)))
		write(1, "", 0);
	else if ((flags->wcd_flag != NULL && ft_strstr(flags->wcd_flag, ".") \
				!= NULL) && ft_strstr(flags->wcd_flag, ".-") == 0 && \
			ft_strstr(flags->wcd_flag, ".1") == 0 && value_d == 0 && \
			((flags->dot != NULL && (ft_strlen(flags->dot) == 0)) || \
			flags->dot == NULL))
		write(1, "", 0);
	else
	{
		value_itoa = ft_itoa(value_d);
		write(1, value_itoa, ft_strlen(value_itoa));
		*return_value = *return_value + ft_strlen(value_itoa);
		ft_memdel((void*)&value_itoa);
	}
}

void	print_int(int value_d, t_flags *flags, int *return_value, \
		int *bool_print)
{
	int		len_flag;
	char	*value_itoa;

	value_itoa = ft_itoa(value_d);
	if (flags->str_flag != NULL)
		len_flag = ft_strlen(flags->str_flag);
	if (*bool_print == 0)
		print_int_next(flags, value_d, value_itoa, return_value);
	if (*bool_print == 2)
	{
		ft_memdel((void*)&value_itoa);
		ft_putnbr(value_d * -1);
		value_itoa = ft_itoa(value_d);
		*return_value = *return_value + ft_strlen(value_itoa);
	}
	ft_memdel((void*)&value_itoa);
}

/*
** This function treats all flags before a d or i, prints them, and also prints
** the int.
*/

void	arg_is_d_i(t_flags *flags, int *return_value, \
		va_list args)
{
	size_t	len_value_d;
	int		bool_print;
	char	*value_itoa;
	int		value_d;
	int		bool_dot;

	bool_dot = 0;
	len_value_d = 0;
	treat_flag(flags, &bool_dot, &value_itoa, args);
	value_d = va_arg(args, int);
	value_itoa = ft_itoa(value_d);
	print_width_int(value_d, &len_value_d, flags, return_value);
	bool_print = print_zero_int(value_d, flags, &len_value_d, return_value);
	*return_value = *return_value + print_dot_int(value_d, flags, \
			&len_value_d, &bool_print);
	print_int(value_d, flags, return_value, &bool_print);
	if (value_d < 0)
	{
		ft_memdel((void*)&value_itoa);
		value_itoa = ft_itoa(value_d);
		len_value_d = ft_strlen(value_itoa);
	}
	ft_memdel((void*)&value_itoa);
	common_minus(flags, len_value_d, return_value);
}
