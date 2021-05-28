/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:07:51 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:54:29 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** This file help prints all flags with all cspiouxX. It gathers all common
** parts that are the same whatever the argument.
*/

void	common_width(t_flags *flags, size_t *len_value, int *return_value)
{
	int stop;

	if ((flags->dot != NULL && flags->minus != NULL && (ft_strlen(flags->dot) \
					< *len_value)) || (flags->dot != NULL && flags->zero == \
					NULL && (ft_strlen(flags->dot) < *len_value)))
		ft_memdel((void*)&flags->dot);
	if (flags->width != NULL && (*len_value < ft_strlen(flags->width)))
	{
		if (flags->dot != NULL)
			stop = ft_strlen(flags->width) - ft_strlen(flags->dot);
		else
			stop = ft_strlen(flags->width) - *len_value;
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

void	commun_zero2(t_flags *flags, int *stop, size_t len_value)
{
	if (flags->dot != NULL && (ft_strlen(flags->dot) >= len_value))
	{
		*stop = ft_strlen(flags->zero) - ft_strlen(flags->dot);
		if (*stop < 0)
			ft_memdel((void*)&flags->zero);
		else
			(flags->zero)[*stop] = '\0';
	}
	else
	{
		*stop = ft_strlen(flags->zero) - len_value;
		(flags->zero)[*stop] = '\0';
	}
}

void	common_zero(t_flags *flags, size_t len_value, int *return_value)
{
	int stop;

	if (flags->zero != NULL && (len_value < ft_strlen(flags->zero)))
	{
		commun_zero2(flags, &stop, len_value);
		stop = stop - 1;
		if (flags->dot != NULL)
		{
			while (stop >= 0)
			{
				(flags->zero)[stop] = ' ';
				stop--;
			}
		}
		if (flags->zero != NULL)
		{
			write(1, flags->zero, ft_strlen(flags->zero));
			*return_value = *return_value + ft_strlen(flags->zero);
		}
	}
}

void	common_dot(t_flags *flags, size_t len_value, int *return_value)
{
	int stop;

	if (flags->dot != NULL && (len_value <= (ft_strlen(flags->dot))))
	{
		stop = ft_strlen(flags->dot) - len_value;
		(flags->dot)[stop] = '\0';
		write(1, flags->dot, ft_strlen(flags->dot));
		*return_value = *return_value + ft_strlen(flags->dot);
	}
}

void	common_minus(t_flags *flags, size_t len_value, int *return_value)
{
	int stop;

	if (flags->minus != NULL && (len_value < ft_strlen(flags->minus)))
	{
		if (flags->dot != NULL)
			stop = ft_strlen(flags->minus) - ft_strlen(flags->dot) - len_value;
		else
			stop = ft_strlen(flags->minus) - len_value;
		if (stop > 0)
		{
			(flags->minus)[stop] = '\0';
			write(1, flags->minus, ft_strlen(flags->minus));
			*return_value = *return_value + ft_strlen(flags->minus);
		}
		else
			ft_memdel((void*)&flags->minus);
	}
}
