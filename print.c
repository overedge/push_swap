/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <nahmed-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 01:50:47 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/30 20:53:33 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				print_tab(int *a, int *b, t_env *e, char *cmd)
{
	int		i;

	i = 0;
	ft_printf("\033[1;34mCMD :\033[m \033[1;32m%s\033[m\n", cmd);
	ft_printf("\033[1;34mPILE A :\033[m ");
	while (i < e->size_a)
			ft_printf("\033[1;32m%d\033[m ", a[i++]);
	ft_putchar('\n');
	if (e->size_b > 0)
	{
		i = 0;
		ft_printf("\033[1;34mPILE B :\033[m ");
		while (i < e->size_b)
			ft_printf("\033[1;32m%d \033[m", b[i++]);
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

void				print_score(t_list *begin_list, t_env *e)
{
	t_score s;

	ft_memset(&s, 0, sizeof(t_score));
	while (begin_list)
	{
		if (ft_strcmp(begin_list->content, "rra") == 0)
			s.rra++;
		else if (ft_strcmp(begin_list->content, "ra") == 0)
			s.ra++;
		else if (ft_strcmp(begin_list->content, "pa") == 0)
			s.pa++;
		else if (ft_strcmp(begin_list->content, "pb") == 0)
			s.pb++;
		else if (ft_strcmp(begin_list->content, "sa") == 0)
			s.sa++;
		begin_list = begin_list->next;
	}
	if (e->f_s == 1)
		ft_printf("\n\033[1;34mSCORE :\033[m\n\033[1;32msa : %d\npa : %d\npb :\
 %d\nrra : %d\nra : %d\n\033[m", s.sa, s.pa, s.pb, s.rra, s.ra);
	if (e->f_t == 1)
		ft_printf("\n\033[1;34mTOTAL : \033[m\033[1;32m%d\n\033[m",\
s.sa + s.pa + s.pb + s.rra + s.ra );
}

void				print_color(t_list *begin_list, t_env *e)
{
	while (begin_list)
	{
		if (ft_strcmp(begin_list->content, "rra") == 0)
			ft_printf("\033[1;34m%s\033[m", begin_list->content);
		else if (ft_strcmp(begin_list->content, "ra") == 0)
			ft_printf("\033[1;32m%s\033[m", begin_list->content);
		else if (ft_strcmp(begin_list->content, "pa") == 0)
			ft_printf("\033[1;36m%s\033[m", begin_list->content);
		else if (ft_strcmp(begin_list->content, "pb") == 0)
			ft_printf("\033[1;35m%s\033[m", begin_list->content);
		else if (ft_strcmp(begin_list->content, "sa") == 0)
			ft_printf("\033[1;33m%s\033[m", begin_list->content);
		if (begin_list->next == NULL)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		begin_list = begin_list->next;
	}
}

void				print(t_env *e)
{
	t_list *tmp;

	tmp = e->begin_list;
	if (e->f_c == 0)
	{
		while (tmp)
		{
			if (tmp->next != NULL)
				ft_printf("%s ", tmp->content);
			else
				ft_printf("%s\n", tmp->content);
			tmp = tmp->next;
		}
	}
	else
		print_color(e->begin_list, e);
	if (e->f_s == 1 || e->f_t == 1)
		print_score(e->begin_list, e);
}
