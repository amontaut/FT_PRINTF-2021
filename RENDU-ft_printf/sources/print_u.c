/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:17:44 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:58:49 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_uint(unsigned int value_u, t_flags *flags, char *value_itoa, \
		int *return_value)
{
	int len_flag;

	len_flag = 0;
	if (flags->str_flag != NULL)
		len_flag = ft_strlen(flags->str_flag);
	if (((flags->wcd_flag == NULL) && (flags->str_flag != NULL && \
					ft_strstr(flags->str_flag, ".") != NULL) && \
				ft_strstr(flags->str_flag, ".1") == 0 && value_u == 0 && \
				((flags->dot != NULL && (ft_strlen(flags->dot) == 0)) || \
				flags->dot == NULL)))
		write(1, "", 0);
	else if ((flags->wcd_flag != NULL && ft_strstr(flags->wcd_flag, ".") \
				!= NULL) && ft_strstr(flags->wcd_flag, ".-") == 0 && \
			ft_strstr(flags->wcd_flag, ".1") == 0 && value_u == 0 && \
			((flags->dot != NULL && (ft_strlen(flags->dot) == 0)) || \
			flags->dot == NULL))
		write(1, "", 0);
	else
	{
		value_itoa = ft_itoa_unsigned(value_u);
		write(1, value_itoa, ft_strlen(value_itoa));
		*return_value = *return_value + ft_strlen(value_itoa);
		ft_memdel((void*)&value_itoa);
	}
}

/*
** this function treats all flags before a u, prints them, and also prints the
** unsigned int
*/

void	arg_is_u(t_flags *flags, char *value_itoa, int *return_value, \
		va_list args)
{
	size_t			len_value_u;
	unsigned int	value_u;
	int				bool_dot;

	bool_dot = 0;
	treat_flag(flags, &bool_dot, &value_itoa, args);
	value_u = va_arg(args, unsigned int);
	value_itoa = ft_itoa_unsigned(value_u);
	if (value_u == 0 && flags->dot != NULL)
		len_value_u = 0;
	else
		len_value_u = ft_strlen(value_itoa);
	common_width(flags, &len_value_u, return_value);
	common_zero(flags, len_value_u, return_value);
	if (flags->dot != NULL && (ft_strlen(value_itoa) <= ft_strlen(flags->dot)))
		len_value_u = ft_strlen(value_itoa);
	common_dot(flags, len_value_u, return_value);
	print_uint(value_u, flags, value_itoa, return_value);
	common_minus(flags, len_value_u, return_value);
	ft_memdel((void*)&value_itoa);
}
