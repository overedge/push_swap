/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 01:50:32 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/26 02:04:30 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				sort(int *a, int *b, t_env *e)
{
	int		i;
	int		j;

	i = e->size_a - 1;
	while (i > 0)
	{
		if (a[i] > a[i - 1])
		{
			cmd_sa(a, e);
			i = e->size_a - 1;
		}
		else
		{
			if (e->size_b == 0)
			{
				while (a[i] < a[i - 1])
				{
					cmd_pb(a, b, e);
					i = e->size_a - 1;
				}
				i++;
			}
		}
		i--;
	}
	if (e->size_b > 0)
	{
		j = e->size_b - 1;
		while (j >= 0)
		{
			cmd_pa(a, b, e);
			j--;
		}
	}
}

void				algo(int *a, int *b, t_env *e)
{
	int		i;

	is_sorted(a);
	if (
}
