/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:15:54 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/31 20:04:23 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		cmd_sa(int *a, int *b, t_env *e)
{
	int		swap;

	if (e->size_a >= 2)
	{
		if (e->f_c == 1 || e->f_s == 1 || e->f_t == 1)
			add_back(&e->begin_list, "sa");
		else
			ft_putstr("sa ");
		swap = a[e->size_a - 1];
		a[e->size_a - 1] = a[e->size_a - 2];
		a[e->size_a - 2] = swap;
		if (e->f_v == 1)
			print_tab(a, b, e, "sa");
	}
}

void		cmd_pa(int *a, int *b, t_env *e)
{
	if (e->size_b > 0)
	{
		if (e->f_c == 1 || e->f_s == 1 || e->f_t == 1)
			add_back(&e->begin_list, "pa");
		else
			ft_putstr("pa ");
		a[e->size_a] = b[e->size_b - 1];
		e->size_a++;
		e->size_b--;
		if (e->f_v == 1)
			print_tab(a, b, e, "pa");
	}
}

void		cmd_pb(int *a, int *b, t_env *e)
{
	if (e->size_a > 0)
	{
		if (e->f_c == 1 || e->f_s == 1 || e->f_t == 1)
			add_back(&e->begin_list, "pb");
		else
			ft_putstr("pb ");
		b[e->size_b] = a[e->size_a - 1];
		e->size_b++;
		e->size_a--;
		if (e->f_v == 1)
			print_tab(a, b, e, "pb");
	}
}

void		cmd_ra(int *a, int *b, t_env *e)
{
	int		tmp;

	tmp = 0;
	if (e->size_a > 2)
	{
		tmp = a[e->size_a - 1];
		ft_memmove(a + 1, a, sizeof(int) * (e->size_a - 1));
		a[0] = tmp;
		if (e->f_c == 1 || e->f_s == 1 || e->f_t == 1)
			add_back(&e->begin_list, "ra");
		else
			ft_putstr("ra ");
		if (e->f_v == 1)
			print_tab(a, b, e, "ra");
	}
}

void		cmd_rra(int *a, int *b, t_env *e)
{
	int		tmp;

	if (e->size_a > 2)
	{
		tmp = a[0];
		ft_memmove(a - 1, a, sizeof(int) * (e->size_a));
		a[e->size_a - 1] = tmp;
		if (e->f_c == 1 || e->f_s == 1 || e->f_t == 1)
			add_back(&e->begin_list, "rra");
		else
			ft_putstr("rra ");
		if (e->f_v == 1)
			print_tab(a, b, e, "rra");
	}
}
