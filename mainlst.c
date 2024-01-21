/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:49:52 by elteran           #+#    #+#             */
/*   Updated: 2023/11/15 20:26:09 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	printlst(t_list *head)
{
	while (head != NULL)
	{
		printf("%s - ", head->content);
		printf("%p-> ", head->content);
		head = head->next;
	}
	printf("NULL\n");
}
void free_content(void *content)
{
    free(content);
}

int	main()
{
/*	t_list	*n = ft_lstnew("hola");

	printf("contenido -> %s\n", (char *)n->content);
	printf("Lista inicial:");
    printlst(n);

	free(n);*/

	t_list *lista = NULL;

	t_list *node1 = malloc(sizeof(t_list));
    node1->content = "Node 1";
    node1->next = NULL;

	t_list *node2 = malloc(sizeof(t_list));
    node2->content = "Node 2";
    node2->next = NULL;

	t_list *node3 = malloc(sizeof(t_list));
    node3->content = "Node 3";
    node3->next = NULL;

	ft_lstadd_front(&lista, node1);
	ft_lstadd_front(&lista, node2);
	ft_lstadd_front(&lista, node3);

	printf("lista resultante:\n");
	printlst(lista);

	printf("la ongitud de la lista es :%d\n", ft_lstsize(lista));
	printf("el ultimo nodo es : ");
	printlst(ft_lstlast(lista));

/*	t_list *new = malloc(sizeof(t_list));
	new->content = "nuevo";
	new->next = NULL;
	
	ft_lstadd_back(&lista, new);

	printlst(lista);
*/
	ft_lstdelone(node2, free_content);
		
	printlst(lista);
	free(node1);
	free(node3);
}
