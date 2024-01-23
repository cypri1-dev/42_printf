/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:30:33 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/21 16:25:30 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (n == 0)
		return (dest);
	if (!((char *)dest) && !((char *)src))
		return (NULL);
	if (src < dest)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int main(void)
{
	char dest[15] = "";
	char src [] = "Salut";

	printf("%s\n", ((char *)ft_memmove(dest, src, 15)));
	printf("%s", ((char *)memmove(dest, src, 15)));
}*/
