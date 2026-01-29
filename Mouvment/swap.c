/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:44:39 by evvan             #+#    #+#             */
/*   Updated: 2026/01/28 22:04:02 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **a)
{
	int		current;
	t_node	*temp;
	int		keep_content;
	
	if (!*a || !a)
		return ;
	temp = *a;
	current = temp->content;
	temp = temp->next;
	keep_content = temp->content;
	temp->content = current;
	temp = temp->prev;
	temp->content = keep_content;
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_node **b)
{
	int		current;
	t_node	*temp;
	int		keep_content;
	
	if (!*b || !b)
		return ;
	temp = *b;
	current = temp->content;
	temp = temp->next;
	keep_content = temp->content;
	temp->content = current;
	temp = temp->prev;
	temp->content = keep_content;
	write(1, "sb\n", 3);
	return ;
}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
	return ;
}
