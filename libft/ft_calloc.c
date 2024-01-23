/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:36:47 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/09 17:16:59 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*result;

	if (nmeb * size == 0)
	{
		result = malloc(0);
		if (!result)
		{
			return (NULL);
		}
		return (result);
	}
	else if (!nmeb || !size || (nmeb * size) / size != nmeb)
	{
		return (NULL);
	}
	result = (char *)malloc(nmeb * size);
	if (!result)
	{
		return (NULL);
	}
	ft_bzero(result, (nmeb * size));
	return (result);
}
