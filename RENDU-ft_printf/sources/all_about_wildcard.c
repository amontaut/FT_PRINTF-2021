/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_about_wildcard.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:23:17 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 22:01:38 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	wcd_part_1(t_flags *flags, int i, int *bool_dot)
{
	if ((flags->wcd_flag)[i] >= '1' && (flags->wcd_flag)[i] <= '9')
		i = convert_flag((flags->wcd_flag), i, &flags->width, ' ');
	if ((flags->wcd_flag)[i] == '.')
	{
		if ((flags->wcd_flag)[i + 1] == '-')
			flags->dot = NULL;
		else
		{
			i = convert_flag((flags->wcd_flag), i, &flags->dot, '0');
			*bool_dot = 1;
		}
	}
}

void	wcd_part_2(t_flags *flags, int i, int *bool_dot, int *bool_zero)
{
	while ((flags->wcd_flag)[i])
	{
		if ((flags->wcd_flag)[i] == '-')
			if ((flags->wcd_flag)[i - 1] != '.')
				i = convert_flag((flags->wcd_flag), i, &flags->minus, ' ');
		if ((flags->wcd_flag)[i] == '.')
			if ((flags->wcd_flag)[i + 1] != '-')
			{
				convert_flag((flags->wcd_flag), i, &flags->dot, '0');
				*bool_dot = 1;
			}
		if ((flags->wcd_flag)[i] == '0' && *bool_dot == 0 && *bool_zero == 0)
		{
			if ((flags->wcd_flag)[i + 1] != '-')
				convert_flag((flags->wcd_flag), i, &flags->zero, '0');
			else
				i = convert_flag((flags->wcd_flag) + 1, i, &flags->minus, \
						' ');
			*bool_zero = 1;
		}
		i++;
	}
}

void	wcd_found(t_flags *flags, char **value_itoa, int *bool_dot, \
		va_list args)
{
	char	*tmp;
	int		value_d;
	int		i;

	i = 0;
	flags->wcd_flag = ft_strdup(flags->str_flag);
	while ((flags->wcd_flag)[i])
	{
		if ((flags->wcd_flag)[i] == '*')
		{
			value_d = va_arg(args, int);
			*value_itoa = ft_itoa(value_d);
			tmp = str_replace(i, flags->wcd_flag, *value_itoa);
			ft_memdel((void*)&flags->wcd_flag);
			flags->wcd_flag = ft_strdup(tmp);
			ft_memdel((void*)value_itoa);
			ft_memdel((void*)&tmp);
		}
		i++;
	}
	*bool_dot = wildcard_flag(flags);
}

/*
** This function will detect what flag we have to convert into a str :
** dot, minus, zero, width and send it to the function transform flag.
** As you can see, i had to cut my original function into several
** functin, and had no inspiration for their naming :)
*/

int		wildcard_flag(t_flags *flags)
{
	int i;
	int bool_dot;
	int bool_zero;

	i = 0;
	bool_dot = 0;
	bool_zero = 0;
	if ((flags->wcd_flag)[i] == '-')
	{
		if ((flags->wcd_flag)[i + 1] == '-')
			i++;
		i = convert_flag((flags->wcd_flag), i, &flags->minus, ' ');
	}
	if ((flags->wcd_flag)[i] >= '1' && (flags->wcd_flag)[i] <= '9')
		wcd_part_1(flags, i, &bool_dot);
	else
		wcd_part_2(flags, i, &bool_dot, &bool_zero);
	return (bool_dot);
}
