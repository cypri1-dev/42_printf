/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:00:23 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/16 12:23:11 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s1;

	i = 0;
	s1 = ((const char *)s);
	while (i < n)
	{
		if (s1[i] == (char)c)
		{
			return ((void *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
