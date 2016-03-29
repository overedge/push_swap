/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:02:20 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/29 15:49:10 by nahmed-m         ###   ########.fr       */
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

void	debug(t_env *e)
{
	if (e->f_v == 1)
		ft_printf("Verbose mode enable\n");
	if (e->f_c == 1)
		ft_printf("Color mode enable\n");
	if (e->f_s == 1)
		ft_printf("score mode enable\n");
	int		i;

	i = 1;
	while (i < e->ac)
	{
		ft_printf("Voici les ARGS : %s\n", e->av[i]);
		i++;
	}
}

void	check_flags(t_env *e)
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
		else
			break ;
		i++;
	}
	e->f_v == 1 ? *e->av = *e->av++ : 0;
	e->f_c == 1 ? *e->av = *e->av++ : 0;
	e->f_s == 1 ? *e->av = *e->av++ : 0;
	e->f_v == 1 ? e->ac-- : 0;
	e->f_c == 1 ? e->ac-- : 0;
	e->f_s == 1 ? e->ac-- : 0;
	if (e->ac == 1 && e->f_s == 1 && e->f_c == 1 && e->f_v == 1)
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
	e.size_a = e.ac - 1;
	//debug(&e);
	check_error(e.ac, e.av);
	tab_a = args_to_tab(tab_a, e.ac, e.av, &e);
	tab_b = args_to_tab(tab_a, e.ac, NULL, &e);

	// debug
	print_tab_a(tab_a, &e);
	ft_putchar('\n');
	print_tab_b(tab_b, &e);
	ft_putchar('\n');

	algo(tab_a, tab_b, &e);

	print_tab_a(tab_a, &e);
	ft_putchar('\n');
	print_tab_b(tab_b, &e);
	ft_putchar('\n');

	ft_putchar('\n');
	print(&e);
	return (0);
}
