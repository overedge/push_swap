/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:15:54 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/24 21:52:57 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cmd_sa(int *a, t_env *e)
{
	int		swap;

	if (e->size_a >= 2)
	{
		swap = a[e->size_a - 1];
		a[e->size_a - 1] = a[e->size_a - 2];
		a[e->size_a - 2] = swap;
	}
}

void	cmd_sb(int *b, t_env *e)
{
	int		swap;

	if (e->size_b >= 2)
	{
		swap = b[e->size_b - 1];
		b[e->size_b - 1] = b[e->size_b - 2];
		b[e->size_b - 2] = swap;
	}
}

void	cmd_pa(int *a, int *b, t_env *e)
{
	if (e->size_b > 0)
	{
		a[e->size_a] = b[e->size_b - 1];
		e->size_a++;
		e->size_b--;
	}
}

void	cmd_pb(int *a, int *b, t_env *e)
{
	if (e->size_a > 0)
	{
		b[e->size_b] = a[e->size_a - 1];
		e->size_b++;
		e->size_a--;
	}
}
