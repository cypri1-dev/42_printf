/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:15 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/13 13:54:37 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int		nbr;
	unsigned char	new;

	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(fd, "-", 1);
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	new = (char)(nbr % 10) + '0';
	write(fd, &new, 1);
}

/* int main(void)
{
	int n = -42;
	int fd = 1;

	ft_putnbr_fd(n, fd);
	return(0);
} */