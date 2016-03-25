/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:02:20 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/25 02:13:40 by nahmed-m         ###   ########.fr       */
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

int			main(int argc, char **argv)
{
	int		*tab_a;
	int		*tab_b;
	t_env	e;

	ft_memset(&e, 0, sizeof(t_env));
	e.size_a = argc - 1;
	e.size_b = 0;
	check_error(argc, argv);
	tab_a = args_to_tab(tab_a, argc, argv, &e);
	tab_b = args_to_tab(tab_a, argc, NULL, &e);

	/* DEBUG */
	ft_printf("TAB DE A :");
	print_tab_a(tab_a, &e);
	ft_putchar('\n');
	ft_printf("TAB DE B :");
	print_tab_b(tab_b, &e);
	ft_putchar('\n');
	cmd_sa(tab_a, &e);
	cmd_pb(tab_a, tab_b, &e);
	cmd_pb(tab_a, tab_b, &e);
	cmd_pb(tab_a, tab_b, &e);
	cmd_ra(tab_a, &e);
	cmd_rb(tab_b, &e);
	cmd_rra(tab_a, &e);
	cmd_rrb(tab_b, &e);
	cmd_sa(tab_a, &e);
	cmd_pa(tab_a, tab_b, &e);
	cmd_pa(tab_a, tab_b, &e);
	cmd_pa(tab_a, tab_b, &e);
	ft_printf("TAB DE A :");
	print_tab_a(tab_a, &e);
	ft_putchar('\n');
	ft_printf("TAB DE B :");
	print_tab_b(tab_b, &e);
	ft_putchar('\n');
	return (0);
}
