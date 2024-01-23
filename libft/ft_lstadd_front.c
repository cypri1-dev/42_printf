/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:47:20 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/17 11:32:53 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	// Création de quelques éléments pour la liste chaînée
	t_list *head = ft_lstnew("Element 1");
	t_list *second = ft_lstnew("Element 2");
	t_list *third = ft_lstnew("Element 3");

	// Affichage initial de la liste
	printf("Liste initiale :\n");
	printf("%s\n", (char *)head->content);
		// Affiche le contenu du premier élément

	// Ajout des éléments au début de la liste
	ft_lstadd_front(&head, third);
	ft_lstadd_front(&head, second);

	// Affichage de la liste après les ajouts
	printf("\nListe apres ajout :\n");
	t_list *current = head;
	while (current != NULL) {
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Libération de la mémoire allouée pour la liste chaînée
	ft_lstclear(&head, free);

	return (0);
}*/