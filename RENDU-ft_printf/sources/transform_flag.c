/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 20:23:04 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 22:01:24 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** This function actually converts the flag that we received as a number into
** a str. The variable section is the flag we are filling (dot, minus, zero
** or width). The type is either 0 or ' ' (space).
*/

int		convert_flag(char *str_flag, int i, char **section, char type)
{
	int		j;
	char	*to_atoi;
	int		real_size;

	j = 0;
	if (str_flag[i] == '-' || str_flag[i] == '.' || str_flag[i] == '0')
		i++;
	while (str_flag[j + i] >= '0' && str_flag[j + i] <= '9')
		j++;
	if (!(to_atoi = malloc(sizeof(char*) * (j + 1))))
		return (0);
	j = 0;
	while (str_flag[i] >= '0' && str_flag[i] <= '9')
		to_atoi[j++] = str_flag[i++];
	to_atoi[j] = '\0';
	real_size = ft_atoi(to_atoi);
	ft_memdel((void*)section);
	if (!((*section) = malloc(sizeof(char*) * (real_size + 2))))
		return (0);
	(*section)[real_size] = '\0';
	j = 0;
	while (real_size--)
		(*section)[j++] = type;
	ft_memdel((void*)&to_atoi);
	return (i);
}

int		normal_flag_next(t_flags *flags, size_t j, int i, int bool_dot)
{
	int bool_zero;

	bool_zero = 0;
	while (j < ft_strlen((flags->str_flag)))
	{
		if ((flags->str_flag)[i] == '-')
			i = convert_flag((flags->str_flag), i, &flags->minus, ' ');
		if ((flags->str_flag)[i] == '.')
		{
			convert_flag((flags->str_flag), i, &flags->dot, '0');
			bool_dot = 1;
		}
		if ((flags->str_flag)[i] == '0' && bool_dot == 0 && bool_zero == 0)
		{
			convert_flag((flags->str_flag), i, &flags->zero, '0');
			bool_zero = 1;
		}
		i++;
		j++;
	}
	return (bool_zero);
}

/*
** this function will detect what flag we have to convert into a str : dot,
** minus, zero, width and send it to the function transform flag
*/

int		normal_flag(t_flags *flags, int i)
{
	int				bool_dot;
	unsigned long	j;
	int				bool_zero;

	bool_dot = 0;
	j = 0;
	bool_zero = 0;
	if ((flags->str_flag)[i] >= '1' && (flags->str_flag)[i] <= '9')
		while (j < ft_strlen((flags->str_flag)))
		{
			if ((flags->str_flag)[i] >= '1' && (flags->str_flag)[i] <= '9')
				i = convert_flag((flags->str_flag), i, &flags->width, ' ');
			if ((flags->str_flag)[i] == '.')
			{
				i = convert_flag((flags->str_flag), i, &flags->dot, '0');
				bool_dot = 1;
			}
			i++;
			j++;
		}
	else
		normal_flag_next(flags, j, i, bool_dot);
	return (bool_dot);
}
