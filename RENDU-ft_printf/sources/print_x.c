/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:23:27 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:59:09 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	malloc_convert_x(int *i, unsigned int value_x)
{
	uintptr_t	div_base;
	uintptr_t	tmp_base;
	int			mod_base;

	*i = 0;
	div_base = value_x;
	while (div_base != 0)
	{
		tmp_base = div_base;
		div_base = div_base / 16;
		mod_base = tmp_base % 16;
		(*i)++;
	}
}

void	convert_x_to_hexa(unsigned int value_x, char **inverse_x)
{
	uintptr_t	div_base;
	uintptr_t	tmp_base;
	int			mod_base;
	static char	hexa_base[] = "0123456789abcdef";
	int			i;

	if (value_x == 0)
		*inverse_x = ft_strdup("0");
	else
	{
		malloc_convert_x(&i, value_x);
		if (!(*inverse_x = malloc(sizeof(char *) * (i))))
			return ;
		div_base = value_x;
		(*inverse_x)[i] = '\0';
		i = i - 1;
		while (div_base != 0)
		{
			tmp_base = div_base;
			div_base = div_base / 16;
			mod_base = tmp_base % 16;
			(*inverse_x)[i] = hexa_base[mod_base];
			i--;
		}
	}
}

void	print_x(unsigned int value_x, t_flags *flags, int *return_value, \
		char *final_x)
{
	int len_flag;

	len_flag = 0;
	if (flags->str_flag != NULL)
		len_flag = ft_strlen(flags->str_flag);
	if (((flags->wcd_flag == NULL) && (flags->str_flag != NULL && \
					ft_strstr(flags->str_flag, ".") != NULL) && \
				ft_strstr(flags->str_flag, ".1") == 0 && value_x == 0 && \
				((flags->dot != NULL && (ft_strlen(flags->dot) == 0)) || \
				flags->dot == NULL)))
		write(1, "", 0);
	else if ((flags->wcd_flag != NULL && ft_strstr(flags->wcd_flag, ".") \
				!= NULL) && ft_strstr(flags->wcd_flag, ".-") == 0 && \
			ft_strstr(flags->wcd_flag, ".1") == 0 && value_x == 0 && \
			((flags->dot != NULL && (ft_strlen(flags->dot) == 0)) || \
			flags->dot == NULL))
		write(1, "", 0);
	else
	{
		write(1, final_x, ft_strlen(final_x));
		*return_value = *return_value + ft_strlen(final_x);
	}
}

/*
** This function treats all flags before a x or X, prints them, and also prints
** the x or X.
*/

void	arg_is_x(t_flags *flags, int *return_value, va_list args, char c)
{
	size_t			len_value_x;
	unsigned int	value_x;
	char			*final_x;
	char			*value_itoa;
	int				bool_dot;

	bool_dot = 0;
	value_itoa = NULL;
	treat_flag(flags, &bool_dot, &value_itoa, args);
	value_x = va_arg(args, unsigned int);
	convert_x_to_hexa(value_x, &final_x);
	len_value_x = ft_strlen(final_x);
	if (value_x == 0 && flags->dot != NULL)
		len_value_x = 0;
	common_width(flags, &len_value_x, return_value);
	common_zero(flags, len_value_x, return_value);
	if (flags->dot != NULL && (ft_strlen(final_x) <= ft_strlen(flags->dot)))
		len_value_x = ft_strlen(final_x);
	common_dot(flags, len_value_x, return_value);
	if (c == 'x')
		print_x(value_x, flags, return_value, final_x);
	else
		print_x(value_x, flags, return_value, ft_strupcase(final_x));
	common_minus(flags, len_value_x, return_value);
	ft_memdel((void*)&final_x);
}
