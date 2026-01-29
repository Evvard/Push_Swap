/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:01:01 by evvan             #+#    #+#             */
/*   Updated: 2026/01/29 11:48:24 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **a)
{
	t_node	*first;
	t_node	*last;
	
	if (!a || !*a || !(*a)->next)
		return ;

	first = *a;
	last = last_node(*a);
	*a = first->next;
	(*a)->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next =first;
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	t_node	*first;
	t_node	*last;
	
	if (!b || !*b || !(*b)->next)
		return ;

	first = *b;
	last = last_node(*b);
	*b = first->next;
	(*b)->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next =first;
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
	return ;
}
