/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 20:22:32 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 22:00:35 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** This file replaces the wildcard '*' in a flag with a wildcard by its value
*/

char	*generate_str(int i, char *newstr, char *replacement, char *str_flag)
{
	unsigned long	j;
	int				tmp;

	j = 0;
	tmp = i + 1;
	while (j < ft_strlen(replacement))
	{
		newstr[i] = replacement[j];
		i++;
		j++;
	}
	while (str_flag[tmp])
	{
		newstr[i] = str_flag[tmp];
		i++;
		tmp++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*str_replace(int index, char *str_flag, char *replacement)
{
	char			*newstr;
	int				i;

	newstr = NULL;
	i = 0;
	newstr = malloc(sizeof(char *) * (ft_strlen((str_flag)) + \
				ft_strlen(replacement)));
	while (str_flag[i])
	{
		newstr[i] = str_flag[i];
		i++;
	}
	newstr[(ft_strlen(str_flag) + ft_strlen(replacement))] = '\0';
	i = 0;
	while (i < index)
	{
		newstr[i] = str_flag[i];
		i++;
	}
	return (generate_str(i, newstr, replacement, str_flag));
}
