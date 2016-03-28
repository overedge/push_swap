/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 01:50:32 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/28 23:16:39 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int					is_sorted(int *a, t_env *e)
{
	int		i;
	int		j;

	j = 0;
	i = e->size_a - 1;
	while (i > 0)
	{
		if (a[i] < a[i - 1])
			j++;
		i--;
	}
	return (j);
}

void		send_b(int *a, int *b, t_env *e)
{
	int		i;

	i = e->size_b - 1;
	while (i > 0)
	{
		cmd_pa(a, b, e);
		i = e->size_b - 1;
	}
}

int					get_minus(int *a, t_env *e)
{
	int		i;
	int		pos;

	i = e->size_a - 1;
	while (i > 0)
	{
		if (a[i] < a[i - 1])
		i--;
	}
	return (pos);
}

void				sort(int *a, int *b, t_env *e)
{
	int			i;
	int			pos;

	while (is_sorted(a, e) != e->size_a - 1)
	{
		
	}
	if (e->size_b < 0)
		send_b(a, b, e);
}


void				algo(int *a, int *b, t_env *e)
{
	int		i;

	i = is_sorted(a, e);
	if (i == e->size_a - 1)
		exit(EXIT_SUCCESS);
	else
		sort(a, b, e);
}
