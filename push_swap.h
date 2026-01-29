/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:36:47 by evvan             #+#    #+#             */
/*   Updated: 2026/01/29 12:21:43 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}			t_stack;

t_node	*create_node(int new_content);
void	node_add_back(t_node **stack, t_node *new_node);
t_node	*last_node(t_node *a);

int		error_duplicate(t_node *a, int n);
int		error_syntaxe(char *str);

char	init_stack_a(t_node **a, char **str);

void	free_error(t_node **a);

void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

void	push(t_node **src, t_node **dest);

#endif