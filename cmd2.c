/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 21:51:43 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/30 20:50:45 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		cmd_ra(int *a, int *b, t_env *e)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = 1;
	swith = 0;
	if (e->size_a > 2)
	{
		add_back(&e->begin_list, "ra");
		tmp = a[0];
		a[0] = a[e->size_a - 1];
		while (i < e->size_a)
		{
			swith == 0 ? (tmp2 = a[i]) : (tmp = a[i]);
			swith == 0 ? (a[i] = tmp) : (a[i] = tmp2);
			swith == 0 ? (swith = 1) : (swith = 0);
			i++;
		}
		if (e->f_v == 1)
			print_tab(a, b, e, "ra");
	}
}

void		cmd_rra(int *a, int *b, t_env *e)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = e->size_a - 2;
	swith = 0;
	if (e->size_a > 2)
	{
		add_back(&e->begin_list, "rra");
		tmp = a[e->size_a - 1];
		a[e->size_a - 1] = a[0];
		while (i >= 0)
		{
			swith == 0 ? (tmp2 = a[i]) : (tmp = a[i]);
			swith == 0 ? (a[i] = tmp) : (a[i] = tmp2);
			swith == 0 ? (swith = 1) : (swith = 0);
			i--;
		}
		if (e->f_v == 1)
			print_tab(a, b, e, "rra");
	}
}
