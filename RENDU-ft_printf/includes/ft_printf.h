/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:38:07 by amontaut          #+#    #+#             */
/*   Updated: 2021/04/01 21:44:08 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

typedef	struct		s_flags
{
	char	*width;
	char	*minus;
	char	*zero;
	char	*dot;
	char	*str_flag;
	char	*wcd_flag;
}					t_flags;

int					ft_printf(const char *content, ...);
void				arg_is_x(t_flags *flags, int *return_value, va_list args, \
char c);
void				arg_is_d_i(t_flags *flags, int *return_value, va_list args);
void				arg_is_p(t_flags *flags, char *value_itoa, \
int *return_value, va_list args);
void				arg_is_c(t_flags *flags, int *return_value, \
va_list args, char c);
void				arg_is_s(t_flags *flags, char *value_itoa, \
int *return_value, va_list args);
void				arg_is_u(t_flags *flags, char *value_itoa,  \
int *return_value, va_list args);
void				ft_memdel(void **ptr);
char				*str_replace(int index, char *str_flag, char *replacement);
void				treat_flag(t_flags *flags, int *bool_dot, \
char **value_itoa, va_list args);
void				common_width(t_flags *flags, size_t *len_value, \
int *return_value);
void				common_zero(t_flags *flags, size_t len_value, \
int *return_value);
void				common_dot(t_flags *flags, size_t len_value, \
int *return_value);
void				common_minus(t_flags *flags, size_t len_value, \
int *return_value);
void				print_width_int(int value_d, size_t *len_value_d, \
t_flags *flags, int *return_value);
int					print_dot_int(int value_d, t_flags *flags, \
size_t *len_value_d, int *bool_print);
int					print_zero_int(int value_d, t_flags *flags, \
size_t *len_value_d, int *return_value);
void				set_to_null(t_flags *flags, int *return_value, int *i);
void				array_free(t_flags *flags);
int					normal_flag(t_flags *flags, int i);
int					wildcard_flag(t_flags *flags);
void				wcd_found(t_flags *flags, char **value_itoa, \
int *bool_dot, va_list args);
int					convert_flag(char *str_flag, int i, \
char **section, char type);

/*
** From libft
*/

void				*ft_calloc(size_t count, size_t size);
void				ft_putchar(char c);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strstr(char *str, char *to_find);
char				*ft_itoa(int n);
char				*ft_itoa_unsigned(uintptr_t n);
char				*ft_strdup(const char *s1);
char				*ft_strupcase(char *str);
int					ft_atoi(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_putnbr(int nb);

#endif
