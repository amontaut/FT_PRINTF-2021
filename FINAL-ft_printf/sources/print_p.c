/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:27:41 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:58:06 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	malloc_convert_p(int *i, uintptr_t value_p)
{
	uintptr_t	div_base;
	uintptr_t	tmp_base;
	int			mod_base;

	div_base = value_p;
	*i = 0;
	div_base = value_p;
	while (div_base != 0)
	{
		tmp_base = div_base;
		div_base = div_base / 16;
		mod_base = tmp_base % 16;
		(*i)++;
	}
}

void	convert_p_to_hexa(uintptr_t value_p, char **inverse_p, t_flags *flags)
{
	uintptr_t	div_base;
	uintptr_t	tmp_base;
	int			mod_base;
	int			i;
	static char	hexa_base[] = "0123456789abcdef";

	if (value_p == 0 && flags->dot == NULL)
		*inverse_p = ft_strdup("0");
	else
	{
		malloc_convert_p(&i, value_p);
		if (!(*inverse_p = malloc(sizeof(char *) * (i))))
			return ;
		div_base = value_p;
		(*inverse_p)[i] = '\0';
		i = i - 1;
		while (div_base != 0)
		{
			tmp_base = div_base;
			div_base = div_base / 16;
			mod_base = tmp_base % 16;
			(*inverse_p)[i] = hexa_base[mod_base];
			i--;
		}
	}
}

/*
** this function treats all flags before a p, prints them, and also prints the
** pointer
*/

void	arg_is_p(t_flags *flags, char *value_itoa, \
		int *return_value, va_list args)
{
	uintptr_t	value_p;
	char		*final_p;
	size_t		len_value_p;
	int			bool_dot;

	bool_dot = 0;
	treat_flag(flags, &bool_dot, &value_itoa, args);
	value_p = va_arg(args, uintptr_t);
	convert_p_to_hexa(value_p, &final_p, flags);
	len_value_p = ft_strlen(final_p) + 2;
	common_width(flags, &len_value_p, return_value);
	common_zero(flags, len_value_p, return_value);
	common_dot(flags, len_value_p, return_value);
	write(1, "0x", 2);
	*return_value = *return_value + 2;
	write(1, final_p, ft_strlen(final_p));
	*return_value = *return_value + ft_strlen(final_p);
	common_minus(flags, len_value_p, return_value);
	ft_memdel((void *)&final_p);
}
