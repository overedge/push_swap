/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:02:20 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/31 19:40:19 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_error(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		if (ft_strcmp(argv[i], ft_itoa(ft_atoi(argv[i]))) != 0)
			error();
		else
		{
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) != 0 || j == i)
					j++;
				else
					error();
			}
		}
		i++;
	}
}

void		check_flags(t_env *e)
{
	int		i;

	i = 1;
	while (i <= e->ac - 1)
	{
		if (ft_strcmp("-v", e->av[i]) == 0 && e->f_v == 0)
			e->f_v = 1;
		else if (ft_strcmp("-c", e->av[i]) == 0 && e->f_c == 0)
			e->f_c = 1;
		else if (ft_strcmp("-s", e->av[i]) == 0 && e->f_s == 0)
			e->f_s = 1;
		else if (ft_strcmp("-t", e->av[i]) == 0 && e->f_t == 0)
			e->f_t = 1;
		else if (ft_strcmp("-l", e->av[i]) == 0 && e->f_l == 0)
			e->f_l = 1;
		else
			break ;
		i++;
	}
}

void		check_flags2(t_env *e)
{
	e->f_v == 1 ? *e->av = *e->av++ : 0;
	e->f_c == 1 ? *e->av = *e->av++ : 0;
	e->f_s == 1 ? *e->av = *e->av++ : 0;
	e->f_t == 1 ? *e->av = *e->av++ : 0;
	e->f_l == 1 ? *e->av = *e->av++ : 0;
	e->f_v == 1 ? e->ac-- : 0;
	e->f_c == 1 ? e->ac-- : 0;
	e->f_s == 1 ? e->ac-- : 0;
	e->f_t == 1 ? e->ac-- : 0;
	e->f_l == 1 ? e->ac-- : 0;
	if (e->ac == 1)
		exit(EXIT_SUCCESS);
}

int			main(int argc, char **argv)
{
	int		*tab_a;
	int		*tab_b;
	t_env	e;

	ft_memset(&e, 0, sizeof(t_env));
	e.size_b = 0;
	e.begin_list = NULL;
	if (argc == 1)
		exit(EXIT_SUCCESS);
	e.ac = argc;
	e.av = argv;
	check_flags(&e);
	check_flags2(&e);
	e.size_a = e.ac - 1;
	check_error(e.ac, e.av);
	tab_a = args_to_tab(tab_a, e.ac, e.av, &e);
	tab_b = args_to_tab(tab_a, e.ac, NULL, &e);
	e.f_l == 1 ? print_tab(tab_a, tab_b, &e, NULL) : 0;
	algo(tab_a, tab_b, &e);
	e.f_l == 1 ? print_tab(tab_a, NULL, &e, NULL) : 0;
	print(&e);
	return (0);
}
