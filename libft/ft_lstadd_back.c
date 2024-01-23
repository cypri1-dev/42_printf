/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:25:41 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/17 12:29:40 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

/*int main(void) 
{
    // Création de quelques éléments pour la liste chaînée
    t_list *head = ft_lstnew("Element 1");
    t_list *second = ft_lstnew("Element 2");
    t_list *third = ft_lstnew("Element 3");

    // Ajout des éléments à la fin de la liste chaînée
    ft_lstadd_back(&head, second);
    ft_lstadd_back(&head, third);

    // Affichage de la liste après les ajouts
    printf("Liste après ajout :\n");
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Libération de la mémoire allouée pour la liste chaînée
    ft_lstclear(&head, free);

    return 0;
}*/