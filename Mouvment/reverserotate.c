/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:08:19 by evvan             #+#    #+#             */
/*   Updated: 2026/01/29 12:03:31 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **a)
{
	t_node	*last_next;
	t_node	*last;
	
	if (!a || !*a || !(*a)->next)
		return ;

	last = last_node(*a);
	last_next = last->prev;
	last->next = *a;
	(*a)->prev = last;
	*a = last;
	last->prev = NULL;
	last_next->next = NULL;
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_node **b)
{
	t_node	*last_next;
	t_node	*last;
	
	if (!b || !*b || !(*b)->next)
		return ;

	last = last_node(*b);
	last_next = last->prev;
	last->next = *b;
	(*b)->prev = last;
	*b = last;
	last->prev = NULL;
	last_next->next = NULL;
	write(1, "rrb\n", 4);
	return ;
}

void	rrr(t_node **a, t_node **b)
{
	rra(*a);
	rrb(*b);
	write(1, "rrr\n", 4);
	return ;
}