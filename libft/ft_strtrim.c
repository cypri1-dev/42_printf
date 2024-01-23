/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:43:10 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/19 14:58:37 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fstart(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		cmpt;

	i = 0;
	while (s1[i])
	{
		cmpt = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				cmpt = 1;
			j++;
		}
		if (!cmpt)
			break ;
		i++;
	}
	return ((char *)s1 + i);
}

static char	*fend(char const *s1, char const *set, char const *start)
{
	size_t	i;
	size_t	j;
	int		cmpt;

	i = ft_strlen(s1) - 1;
	while (s1 + i >= start)
	{
		cmpt = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				cmpt = 1;
			j++;
		}
		if (!cmpt)
			break ;
		i--;
	}
	if (s1 + i < start)
		return ((char *)start);
	return ((char *)s1 + i);
}

static char	*fill(char const *start, char const *end)
{
	char	*new;
	size_t	i;

	new = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!new)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		new[i] = start[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*new;

	if (!s1)
		return (NULL);
	start = fstart(s1, set);
	end = fend(s1, set, s1);
	if (!s1[0] || end < start)
	{
		new = malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		new[0] = '\0';
	}
	else
		new = fill(start, end);
	if (!new)
		return (NULL);
	return (new);
}

/*int main(void)
{
	const char	*str1="**Salut les amis**";
	const char	*sep="**";

	printf("%s", ft_strtrim(str1, sep));
	return(0);
}*/