/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_node_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evvan <evvan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:15:15 by evvan             #+#    #+#             */
/*   Updated: 2026/01/28 14:35:30 by evvan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_error(t_node **a)
{
	t_node	*tmp;
	t_node	*save;
	if (!a || !a)
		return ;
	save = *a;
	while (save != NULL)
	{
		tmp = save->next;
		free(save);
		save = tmp;
	}
	*a = NULL;
	return ;
}

int	error_duplicate(t_node *a, int	n)
{
	if (!a)
		return (0);
	while (a != NULL)
	{
		if (a->content == n)
			return (1);
			a = a->next;
	}
	return (0);
}

int	error_syntaxe(char	*str)
{
	int	i;
	
	i = 0;
	if (str[i] == '+' || str[i] == '-' && str[i])
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (1);
	while (str[i] >= '0' && str[i] <= '9' && str[i])
		i++;
	if (str[i] == '\0')
		return(0);
	return (1);
}