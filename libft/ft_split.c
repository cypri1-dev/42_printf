/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:01:10 by cyprien           #+#    #+#             */
/*   Updated: 2023/11/22 09:23:37 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (trigger == 0 && *str != c)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**free_tab(char **split, int i)
{
	i--;
	while (i != 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
	return (NULL);
}

static char	**split_it(char *s, size_t i, char c, char **split)
{
	size_t	j;
	int		index;

	index = -1;
	j = 0;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			if (!split[j - 1])
				return (free_tab(split, j - 1));
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = -1;
	split = split_it((char *)s, i, c, split);
	return (split);
}

/*void	print_split(char **split)
{
	if (!split)
		return ;
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	}
}

int	main(void)
{
	char const	*str;
	char		**split_result;
	char		**temp;

	str = "--1-2--3---4----5-----42";
	split_result = ft_split(str, '-');
	printf("Original string: %s\n", str);
	printf("Split string:\n");
	print_split(split_result);
	// Libération de la mémoire allouée pour le tableau de chaînes
	if (split_result)
	{
		temp = split_result;
		while (*temp)
		{
			free(*temp);
			temp++;
		}
	}
	return (0);
}*/
