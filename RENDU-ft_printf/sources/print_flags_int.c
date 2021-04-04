/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flags_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:25:54 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:57:39 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** This flag prints all 4 flags for the arg d or i
*/

void	print_width_next(t_flags *flags, size_t *len_value_d, int value_d, \
		int *return_value)
{
	int		stop;

	if (flags->width != NULL && (*len_value_d < ft_strlen(flags->width)))
	{
		if (flags->dot != NULL)
		{
			stop = ft_strlen(flags->width) - ft_strlen(flags->dot);
			if (value_d < 0)
				stop = stop - 1;
		}
		else
			stop = ft_strlen(flags->width) - *len_value_d;
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

void	print_width_int(int value_d, size_t *len_value_d, t_flags *flags, \
		int *return_value)
{
	char	*value_itoa;

	value_itoa = ft_itoa(value_d);
	if (value_d == 0 && flags->dot != NULL)
		*len_value_d = 0;
	else
		*len_value_d = ft_strlen(value_itoa);
	if ((flags->dot != NULL && flags->minus != NULL && (ft_strlen(flags->dot) \
					< *len_value_d)) || (flags->dot != NULL && flags->zero \
					== NULL && (ft_strlen(flags->dot) < *len_value_d)))
		ft_memdel((void*)&flags->dot);
	print_width_next(flags, len_value_d, value_d, return_value);
	ft_memdel((void*)&value_itoa);
}

void	print_zero_next(t_flags *flags, int value_d, size_t *len_value_d, \
		int *stop)
{
	char *value_itoa;

	if (value_d == 0 && flags->dot != NULL)
		*len_value_d = 0;
	else
	{
		value_itoa = ft_itoa(value_d);
		*len_value_d = ft_strlen(value_itoa);
		ft_memdel((void*)&value_itoa);
	}
	if (flags->dot != NULL && (ft_strlen(flags->dot) >= *len_value_d))
	{
		*stop = ft_strlen(flags->zero) - ft_strlen(flags->dot);
		if (value_d < 0)
			*stop = *stop - 1;
		if (*stop < 0)
			ft_memdel((void*)&flags->zero);
		else
			(flags->zero)[*stop] = '\0';
	}
	else
	{
		*stop = ft_strlen(flags->zero) - *len_value_d;
		(flags->zero)[*stop] = '\0';
	}
}

int		print_zero_int(int value_d, t_flags *flags, size_t *len_value_d,\
		int *return_value)
{
	int	stop;
	int bool_print;

	bool_print = 0;
	if (flags->zero != NULL && (*len_value_d < ft_strlen(flags->zero)))
	{
		print_zero_next(flags, value_d, len_value_d, &stop);
		stop = stop - 1;
		if (flags->dot != NULL)
			while (stop >= 0)
			{
				(flags->zero)[stop] = ' ';
				stop--;
			}
		if (flags->zero != NULL && value_d < 0 && flags->dot == NULL)
			write(1, "-", 1);
		if (flags->zero != NULL)
		{
			write(1, flags->zero, ft_strlen(flags->zero));
			*return_value = *return_value + ft_strlen(flags->zero);
		}
		if (flags->zero != NULL && value_d < 0 && flags->dot == NULL)
			bool_print = 2;
	}
	return (bool_print);
}

int		print_dot_int(int value_d, t_flags *flags, size_t *len_value_d, \
		int *bool_print)
{
	char	*value_itoa;
	int		return_value;

	return_value = 0;
	value_itoa = ft_itoa(value_d);
	if (flags->dot != NULL && (ft_strlen(value_itoa) <= ft_strlen(flags->dot)))
	{
		*len_value_d = ft_strlen(value_itoa);
		if (value_d < 0)
			write(1, "-", 1);
		if (value_d < 0)
			*len_value_d = *len_value_d - 1;
		(flags->dot)[ft_strlen(flags->dot) - *len_value_d] = '\0';
		write(1, flags->dot, ft_strlen(flags->dot));
		return_value = ft_strlen(flags->dot);
		if (value_d < 0)
		{
			ft_putnbr(value_d * -1);
			return_value = return_value + ft_strlen(value_itoa);
			*bool_print = 1;
		}
	}
	ft_memdel((void*)&value_itoa);
	return (return_value);
}
