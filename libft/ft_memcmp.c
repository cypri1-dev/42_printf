/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:09:41 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/08 10:24:34 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	if ((int)n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((int)str1[i] - (int)str2[i]);
		}
		i++;
	}
	return (0);
}
