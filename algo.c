/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 01:50:32 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/29 20:49:19 by nahmed-m         ###   ########.fr       */
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
	int		pos;

	i = 0;
	while (i <= e->size_a - 1)
	{
		pos = 0;
		j = 0;
		while (j <= e->size_a - 1)
		{
			if (a[i] < a[j] || j == i)
				pos++;
			j++;
		}
		if (pos == e->size_a)
			return (i);
		i++;
	}
	return (-1);
}

void				sort(int *a, int *b, t_env *e)
{
	int			i;
	int			pos;

	while (is_sorted(a, e) != e->size_a - 1)
	{
		pos = get_minus(a, e);
		if (pos == -1)
			ft_printf("BUG DE OUF DE OUF \n");
		if (e->size_a == 2 && a[e->size_a - 1] > a[e->size_a - 2])
			cmd_sa(a, e);
		else if (pos < e->size_a / 2)
		{
			while (pos > 0)
			{
				cmd_ra(a, e);
				pos--;
			}
			cmd_pb(a, b, e);
		}
		else
		{
			while (pos > 0)
			{
				cmd_rra(a, e);
				pos--;
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
