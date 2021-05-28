/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:15:22 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:58:30 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_width_str(char *value_s, t_flags *flags, int *return_value)
{
	int stop;

	if ((flags->dot != NULL && flags->minus != NULL && (ft_strlen(flags->dot) \
					>= ft_strlen(value_s))) || (flags->dot != NULL && \
				flags->zero != NULL && \
				(ft_strlen(flags->dot) >= ft_strlen(value_s))))
		ft_memdel((void*)&flags->dot);
	if (flags->width != NULL)
	{
		if (flags->dot != NULL && (ft_strlen(flags->width) >= \
					ft_strlen(flags->dot)) && \
				(ft_strlen(value_s) >= ft_strlen(flags->dot)))
			stop = ft_strlen(flags->width) - ft_strlen(flags->dot);
		else
			stop = ft_strlen(flags->width) - ft_strlen(value_s);
		if (stop > 0)
		{
			(flags->width)[stop] = '\0';
			write(1, flags->width, ft_strlen(flags->width));
			*return_value = *return_value + ft_strlen(flags->width);
		}
		else
			ft_memdel((void*)&flags->width);
	}
}

void	print_str(char *value_s, int *return_value)
{
	int t;

	t = 0;
	if (value_s != NULL)
		while ((value_s)[t])
		{
			ft_putchar(value_s[t]);
			t++;
			(*return_value)++;
		}
	else
	{
		write(1, "(null)", 6);
		*return_value = *return_value + 5;
	}
}

void	print_dot_str(char **value_s, t_flags *flags, int *return_value)
{
	int		stop;
	char	*copy_value_s;

	if (flags->dot != NULL && (ft_strlen(*value_s) > ft_strlen(flags->dot)))
	{
		copy_value_s = ft_strdup(*value_s);
		ft_memdel((void*)value_s);
		*value_s = ft_substr(copy_value_s, 0, ft_strlen(flags->dot));
		ft_memdel((void*)&copy_value_s);
		write(1, *value_s, ft_strlen(*value_s));
		*return_value = *return_value + ft_strlen(*value_s);
		stop = ft_strlen(flags->dot) - ft_strlen(*value_s);
		(flags->dot)[stop] = '\0';
		write(1, flags->dot, ft_strlen(flags->dot));
		*return_value = *return_value + ft_strlen(flags->dot);
	}
	else
		print_str(*value_s, return_value);
}

/*
** This function treats all flags before a s, prints them, and prints the s.
*/

void	arg_is_s(t_flags *flags, char *value_itoa, \
		int *return_value, va_list args)
{
	char	*value_s;
	size_t	len_value_str;
	int		bool_dot;

	bool_dot = 0;
	treat_flag(flags, &bool_dot, &value_itoa, args);
	value_s = va_arg(args, char *);
	if (value_s == NULL)
		value_s = "(null)";
	value_s = ft_strdup(value_s);
	print_width_str(value_s, flags, return_value);
	len_value_str = ft_strlen(value_s);
	common_zero(flags, len_value_str, return_value);
	print_dot_str(&value_s, flags, return_value);
	len_value_str = ft_strlen(value_s);
	common_minus(flags, len_value_str, return_value);
	ft_memdel((void*)&value_s);
}
