/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:20:46 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/02 10:48:36 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** Sets all values to 0 at the beggining of printf
*/

void	set_to_null(t_flags *flags, int *return_value, int *i)
{
	flags->width = NULL;
	flags->dot = NULL;
	flags->minus = NULL;
	flags->zero = NULL;
	flags->str_flag = NULL;
	flags->wcd_flag = NULL;
	*return_value = 0;
	*i = 0;
}

/*
** Frees all variables from the structure
*/

void	array_free(t_flags *flags)
{
	ft_memdel((void**)&flags->width);
	ft_memdel((void**)&flags->dot);
	ft_memdel((void**)&flags->minus);
	ft_memdel((void**)&flags->zero);
	ft_memdel((void**)&flags->str_flag);
	ft_memdel((void**)&flags->wcd_flag);
}
