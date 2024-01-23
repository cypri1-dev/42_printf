/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:29:52 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/20 15:14:56 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;
	size_t	dist;

	if ((!src || !dst) && size == 0)
		return (0);
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dest_len > size)
		return (src_len + size);
	dist = dest_len + src_len;
	i = 0;
	while (dest_len + i < size - 1 && src[i])
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	if (dist >= dest_len + size && dest_len > src_len)
		return (dest_len + size);
	return (dist);
}

// void main(void)
// {
// 		char	*dest;

// 		dest = malloc(10);
// 		dest[0] = 'a';
// 		dest[9] = '\0';
// 		printf("%d\n", (ft_strlcat(dest, "lorem ipsum dolor sit amet", 6)));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// }