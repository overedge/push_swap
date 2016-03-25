/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 14:45:33 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/25 17:40:15 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*args_to_tab(int *tab, int ac, char **av, t_env *e)
{
	int		i;
	int		j;

	i = 0;
	j = ac - 1;
	if ((tab = (int*)malloc(sizeof(int) * ac - 1)) == NULL)
		error();
	if (av)
	{
		while (j > 0)
		{
			tab[i] = ft_atoi(av[j]);
			i++;
			j--;
		}
		return (tab);
	}
	return (tab);
}

void	print_tab_a(int *tab, t_env *e)
{
	int		i;

	i = 0;
	while (i < e->size_a)
	{
		ft_printf("%d ", tab[i]);
		i++;
	}
}

void	print_tab_b(int *tab, t_env *e)
{
	int		i;

	i = 0;
	while (i < e->size_b)
	{
		ft_printf("%d ", tab[i]);
		i++;
	}
}

void	error()
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void		add_back(t_list **begin_list, char *str)
{
	t_list *tmp;

	tmp = *begin_list;
	if (*begin_list == NULL)
		*begin_list = ft_lstnew(str, ft_strlen(str) + 1);
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ft_lstnew(str, ft_strlen(str) + 1);
	}
}
