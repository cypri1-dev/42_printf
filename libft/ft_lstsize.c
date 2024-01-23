/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:55:42 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/17 12:15:35 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int main(void) 
{
    // Création de quelques éléments pour la liste chaînée
    t_list *head = ft_lstnew("Element 1");
    t_list *second = ft_lstnew("Element 2");
    t_list *third = ft_lstnew("Element 3");

    // Liaisons des éléments pour former une liste chaînée
    head->next = second;
    second->next = third;

    // Affichage de la taille de la liste chaînée
    printf("Taille de la liste : %d\n", ft_lstsize(head));

    // Libération de la mémoire allouée pour la liste chaînée
    ft_lstclear(&head, free);

    return 0;
}*/