/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:15:54 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/30 20:50:22 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cmd_sa(int *a, int *b, t_env *e)
{
	int		swap;

	if (e->size_a >= 2)
	{
		add_back(&e->begin_list, "sa");
		swap = a[e->size_a - 1];
		a[e->size_a - 1] = a[e->size_a - 2];
		a[e->size_a - 2] = swap;
		if (e->f_v == 1)
			print_tab(a, b, e, "sa");
	}
}

void	cmd_pa(int *a, int *b, t_env *e)
{
	if (e->size_b > 0)
	{
		add_back(&e->begin_list, "pa");
		a[e->size_a] = b[e->size_b - 1];
		e->size_a++;
		e->size_b--;
		if (e->f_v == 1)
			print_tab(a, b, e, "pa");
	}
}

void	cmd_pb(int *a, int *b, t_env *e)
{
	if (e->size_a > 0)
	{
		add_back(&e->begin_list, "pb");
		b[e->size_b] = a[e->size_a - 1];
		e->size_b++;
		e->size_a--;
		if (e->f_v == 1)
			print_tab(a, b, e, "pb");
	}
}
