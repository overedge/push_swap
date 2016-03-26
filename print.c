/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 01:50:47 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/25 21:39:03 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				print(t_env *e)
{
	t_list *tmp;

	tmp = e->begin_list;
	while (tmp)
	{
		ft_printf("%s ", tmp->content);
		tmp = tmp->next;
	}
}
