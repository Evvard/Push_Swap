/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_node_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:47:10 by evvan             #+#    #+#             */
/*   Updated: 2026/01/29 10:55:18 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int new_content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = new_content;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

void	node_add_back(t_node **stack, t_node *new_node)
{
	t_node	*temp;

	temp = *stack;
	if (!new_node)
		free_error(stack);
	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
}

t_node	*last_node(t_node *a)
{
	if (!a)
		return (NULL);
	while(a->next != NULL)
		a = a->next;
	return (a);
}

char	init_stack_a(t_node **a, char **str)
{
	int		i;
	long	nb;

	i = 0;
	while (str[i])
	{
		if (error_syntaxe(str[i]))
			free_error(a);
		nb = ft_atol(str[i]);
		if (nb < INT_MIN || nb > INT_MAX)
			free_error(a);
		if (error_duplicate(*a, (int)nb))
			free_error(a);
		node_add_back(a, create_node(nb));
		i++;
	}
}
