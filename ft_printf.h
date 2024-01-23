/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:02:12 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/23 10:49:45 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *input, ...);
int	print_char(char c);
int	print_int(int nb);
int	print_string(char *str);
int	print_pointer(unsigned long long ptr);
int	print_unsigned(unsigned int nb);
int	print_hexa(unsigned int nb, const char form);
int	print_percent(void);

#endif
