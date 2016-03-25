/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 21:51:43 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/25 02:13:38 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void		swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// Check la norme
void		cmd_ra(int *a, t_env *e)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = 1;
	swith = 0;
	if (e->size_a == 2)
		swap(&a[e->size_a - 1], &a[e->size_a - 2]);
	else if (e->size_a > 2)
	{
		tmp = a[0];
		a[0] = a[e->size_a - 1];
		while (i < e->size_a)
		{
			swith == 0 ? (tmp2 = a[i], a[i] = tmp, swith = 1) :
			(tmp = a[i], a[i] = tmp2, swith = 0);
			i++;
		}
	}
}

void		cmd_rb(int *b, t_env *e)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = 1;
	swith = 0;
	if (e->size_b == 2)
		swap(&b[e->size_b - 1], &b[e->size_b - 2]);
	else if (e->size_b > 2)
	{
		tmp = b[0];
		b[0] = b[e->size_b - 1];
		while (i < e->size_b)
		{
			if (swith == 0)
			{
				tmp2 = b[i];
				b[i] = tmp;
				swith = 1;
			}
			else
			{
				tmp = b[i];
				b[i] = tmp2;
				swith = 0;
			}
			i++;
		}
	}
}

void		cmd_rra(int *a, t_env *e)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = e->size_a - 2;
	swith = 0;
	if (e->size_a == 2)
		swap(&a[e->size_a - 1], &a[e->size_a - 2]);
	else if (e->size_a > 2)
	{
		tmp = a[e->size_a - 1];
		a[e->size_a - 1] = a[0];
		while (i >= 0)
		{
			if (swith == 0)
			{
				tmp2 = a[i];
				a[i] = tmp;
				swith = 1;
			}
			else
			{
				tmp = a[i];
				a[i] = tmp2;
				swith = 0;
			}
			i--;
		}
	}
}

void		cmd_rrb(int *b, t_env *e)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = e->size_a - 2;
	swith = 0;
	if (e->size_b == 2)
		swap(&b[e->size_b - 1], &b[e->size_b - 2]);
	else if (e->size_b > 2)
	{
		tmp = b[e->size_b - 1];
		b[e->size_b - 1] = b[0];
		while (i >= 0)
		{
			if (swith == 0)
			{
				tmp2 = b[i];
				b[i] = tmp;
				swith = 1;
			}
			// si norme ternaire marche pas enlever else et le premier if
			else
			{
				tmp = b[i];
				b[i] = tmp2;
				swith = 0;
			}
			i--;
		}
	}
}
