/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:08:12 by evvan             #+#    #+#             */
/*   Updated: 2026/01/29 11:14:42 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node 	*a = NULL;
	int		i = 0;
	
	if (ac >= 2)
	{
		printf("---Stack A---\n");
		init_stack_a(&a, av + 1);
		t_node	*tmp;

		tmp = a;
		while (tmp != NULL)
		{
			printf("%d ", tmp->content);
			tmp = tmp->next;
		}
		printf("\n");
		rra(&a);
		tmp = a;
		while (tmp != NULL)
		{
			printf("%d ", tmp->content);
			tmp = tmp->next;
		}
		free_error(&a);
	}
	printf("\n");
	return 0;
}