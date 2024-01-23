/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:24 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/08 16:37:35 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s[len] != ((unsigned char)c))
	{
		if (len == 0 && s[len] != c)
		{
			return ((char *)0);
		}
		len--;
	}
	return ((char *)&s[len]);
}
