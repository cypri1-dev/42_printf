/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:16:10 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/17 12:15:24 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
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

	// Récupération du dernier élément de la liste chaînée
	t_list *last = ft_lstlast(head);

	// Affichage du contenu du dernier élément
	if (last != NULL) {
		printf("Contenu du dernier élément : %s\n", (char *)last->content);
	} else {
		printf("La liste est vide.\n");
	}

	// Libération de la mémoire allouée pour la liste chaînée
	ft_lstclear(&head, free);

	return (0);
}*/