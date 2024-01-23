/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:40:41 by cyferrei          #+#    #+#             */
/*   Updated: 2023/11/17 14:15:04 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cpy;

	new = NULL;
	while (lst)
	{
		cpy = ft_lstnew(f(lst->content));
		if (!cpy)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, cpy);
		lst = lst->next;
	}
	return (new);
}

/*void *transform(void *content) {
    char *str = (char *)content;
    // Exemple de transformation : changer les minuscules en majuscules
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convertit en majuscule
        }
    }
    return content;
}

int main(void) {
    // Création de quelques éléments pour la liste chaînée
    t_list *head = ft_lstnew("element 1");
    t_list *second = ft_lstnew("element 2");
    t_list *third = ft_lstnew("element 3");

    // Liaisons des éléments pour former une liste chaînée
    head->next = second;
    second->next = third;

    // Utilisation de ft_lstmap pour appliquer une transformation à la liste
    t_list *mapped_list = ft_lstmap(head, transform, free);

    // Affichage de la liste transformée
    printf("Liste transformée :\n");
    t_list *current = mapped_list;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Libération de la mémoire allouée pour les deux listes
    ft_lstclear(&head, free);
    ft_lstclear(&mapped_list, free);

    return 0;
}*/