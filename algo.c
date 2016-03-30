/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 01:50:32 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/30 20:07:36 by nahmed-m         ###   ########.fr       */
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
	while (e->size_b  != 0)
	{
		cmd_pa(a, b, e);
		i = e->size_b - 1;
	}
}

int					get_minus(int *a, t_env *e)
{
	int		i;
	int		j;
	int		min;

	i = 0;
	j = 0;
	min = a[0];
	while (i < e->size_a)
	{
		if (a[i] < min)
		{
			min = a[i];
			j = i;
		}
		i++;
	}
	//ft_printf("La position de lidex et %d\n et size_a : %d\n", j, e->size_a);
//	exit(0);
	return (j);
}

void				sort(int *a, int *b, t_env *e)
{
	int			i;
	int			pos;

	while (is_sorted(a, e) != e->size_a - 1)
	{
		pos = get_minus(a, e);
		if (e->size_a == 2 && a[e->size_a - 1] > a[e->size_a - 2])
			cmd_sa(a, b, e);
		else if (pos < e->size_a / 2)
		{
			while (pos != e->size_a - 1)
			{
				cmd_rra(a, b, e);
				pos = get_minus(a, e);
			}
			cmd_pb(a, b, e);
		}
		else
		{
			while (pos != e->size_a - 1)
			{
				cmd_ra(a, b, e);
				pos = get_minus(a, e);
			}
			cmd_pb(a, b, e);
		}
	}
	if (e->size_b > 0)
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
