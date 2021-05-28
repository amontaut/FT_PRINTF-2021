/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:46:48 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 10:05:13 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned long	i;

	i = 0;
	if (count < 0 || size < 0)
		return (NULL);
	else
	{
		if (!(ptr = malloc(size * count)))
			return (NULL);
		while (i < (size * count))
		{
			ptr[i] = 0;
			i++;
		}
		return (ptr);
	}
}
