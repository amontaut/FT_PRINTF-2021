/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 22:14:58 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 22:06:10 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

/*
** this function seperates each flags which is before a cspiouxX and converts it
** from a number to a str, according to how they should appear in the end, so it
** will either be a str of 0 or a str of ' ' (space). Depending if the flag is
** normal or if there is a wildcard, we will use the function 'normal flag' or
** 'wildcard_flag' accordingly. For exemple, if we have %09d, then the str
** "000000000" will be assigned to the variable zero though the function normal
** flag. If we have ("%-*d", 8, 6), then the str "        " will be assigned to
** the variable minus through the function wildcard flag.
*/

void	treat_flag(t_flags *flags, int *bool_dot, char **value_itoa, \
		va_list args)
{
	int		i;

	i = 0;
	if (ft_strstr(flags->str_flag, "*") == NULL)
		*bool_dot = normal_flag(flags, i);
	else
		wcd_found(flags, value_itoa, bool_dot, args);
}

void	calloc_extract_flag(t_flags *flags, const char *ptr, int i)
{
	int malloc_flag;

	malloc_flag = 0;
	while (ptr[i] != 'd' && ptr[i] != 's' && ptr[i] != 'i' && ptr[i] != 'u' \
			&& ptr[i] != 'p' && ptr[i] != 'x' && ptr[i] != 'X' && \
			ptr[i] != 'c' && ptr[i] != '%')
	{
		i++;
		malloc_flag++;
	}
	if (!((flags->str_flag) = ft_calloc((sizeof(char *) * \
						(malloc_flag + 1)), 1)))
		return ;
}

/*
** This function takes all flags after the % in the main, so basically
** everything that is between the % and the cspiouxX and puts it into
** 1 str called str_flag.
** For example, if we have %.05-*d, str_flag will be ".05-*".
*/

void	extract_flag(int *i, t_flags *flags, const char *ptr, int *return_value)
{
	int	j;

	array_free(flags);
	(*i)++;
	if (ptr[*i] == ' ')
	{
		write(1, " ", 1);
		(*return_value)++;
	}
	calloc_extract_flag(flags, ptr, *i);
	j = 0;
	while (ptr[*i] != 'd' && ptr[*i] != 's' && ptr[*i] != 'i' && ptr[*i] != 'u'\
			&& ptr[*i] != 'p' && ptr[*i] != 'x' && ptr[*i] != 'X' \
			&& ptr[*i] != 'c' && ptr[*i] != '%')
	{
		flags->str_flag[j] = ptr[*i];
		j++;
		(*i)++;
	}
	if (j > 0)
		flags->str_flag[j] = '\0';
}

/*
** This function will print everything that has to be printed depending on what
** is the argument : cspiouxX and their flags or normal text
*/

void	extract_to_print(t_flags *flags, char c, int *return_value, \
		va_list args)
{
	char *value_itoa;

	flags->wcd_flag = NULL;
	value_itoa = NULL;
	if (c == 'd' || c == 'i')
		arg_is_d_i(flags, return_value, args);
	else if (c == 'u')
		arg_is_u(flags, value_itoa, return_value, args);
	else if (c == 'p')
		arg_is_p(flags, value_itoa, return_value, args);
	else if (c == 'x' || c == 'X')
		arg_is_x(flags, return_value, args, c);
	else if (c == 's')
		arg_is_s(flags, value_itoa, return_value, args);
	else if (c == 'c' || c == '%')
		arg_is_c(flags, return_value, args, c);
	else
	{
		ft_putchar('%');
		(*return_value)++;
		ft_putchar(c);
		(*return_value)++;
	}
}

/*
** It all starts there
*/

int		ft_printf(const char *content, ...)
{
	const char	*ptr;
	int			return_value;
	va_list		args;
	int			i;
	t_flags		flags;

	set_to_null(&flags, &return_value, &i);
	va_start(args, content);
	ptr = content;
	while (ptr[i])
		if (ptr[i] != '%')
		{
			ft_putchar(ptr[i]);
			return_value++;
			i++;
		}
		else
		{
			extract_flag(&i, &flags, ptr, &return_value);
			extract_to_print(&flags, ptr[i], &return_value, args);
			array_free(&flags);
			i++;
		}
	va_end(args);
	return (return_value);
}
