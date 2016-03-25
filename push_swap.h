/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:15:54 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/25 17:39:21 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/includes/libft.h"

typedef struct		s_env
{
	int				size_a;
	int				size_b;
	t_list			*begin_list;
	char			f_v;
	char			f_c;
	char			f_s;
	int				ac;
	char			**av;
}					t_env;

/*
**	CMDS 
*/
void					cmd_sa(int *a, t_env *e);
void					cmd_sb(int *b, t_env *e);
void					cmd_pa(int *a, int *b, t_env *e);
void					cmd_pb(int *a, int *b, t_env *e);
void					cmd_ra(int *a, t_env *e);
void					cmd_rb(int *b, t_env *e);
void					cmd_rra(int *a, t_env *e);
void					cmd_rrb(int *b, t_env *e);

/*
** UTILS
*/
int						*args_to_tab(int *tab, int ac, char **av, t_env *e);
void					print_tab_a(int *tab, t_env *e);
void					print_tab_b(int *tab, t_env *e);
void					error();
void					add_back(t_list **begin_list, char *str);

/*
** ALGO
*/
void					algo(int *a, int *b, t_env *e);

/*
** PRINT
*/
void					print(t_env *e);
#endif
