/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 21:51:43 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/25 12:14:57 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		cmd_ra_rb(int *tab, t_env *e, int size)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = 1;
	swith = 0;
	if (size > 2)
	{
		tmp = tab[0];
		tab[0] = tab[size - 1];
		while (i < size)
		{
			swith == 0 ? (tmp2 = tab[i]) : (tmp = tab[i]);
			swith == 0 ? (tab[i] = tmp) : (tab[i] = tmp2);
			swith == 0 ? (swith = 1) : (swith = 0);
			i++;
		}
	}
}

void		cmd_rra_rrb(int *tab, t_env *e, int size)
{
	int		i;
	int		tmp;
	int		tmp2;
	int		swith;

	i = size - 2;
	swith = 0;
	if (size > 2)
	{
		tmp = tab[size - 1];
		tab[size - 1] = tab[0];
		while (i >= 0)
		{
			swith == 0 ? (tmp2 = tab[i]) : (tmp = tab[i]);
			swith == 0 ? (tab[i] = tmp) : (tab[i] = tmp2);
			swith == 0 ? (swith = 1) : (swith = 0);
			i--;
		}
	}
}
