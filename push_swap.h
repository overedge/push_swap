/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:15:54 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/31 20:06:22 by nahmed-m         ###   ########.fr       */
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
	char			f_t;
	char			f_l;
	int				ac;
	char			**av;
}					t_env;

typedef struct		s_score
{
	int				sa;
	int				pa;
	int				pb;
	int				rra;
	int				ra;
}					t_score;

/*
**	CMDS
*/
void				cmd_sa(int *a, int *b, t_env *e);
void				cmd_pa(int *a, int *b, t_env *e);
void				cmd_pb(int *a, int *b, t_env *e);
void				cmd_ra(int *a, int *b, t_env *e);
void				cmd_rra(int *a, int *b, t_env *e);

/*
** UTILS
*/
int					*args_to_tab(int *tab, int ac, char **av, t_env *e);
void				error();
void				add_back(t_list **begin_list, char *str);

/*
** ALGO
*/
void				algo(int *a, int *b, t_env *e);

/*
** PRINT
*/
void				print_score(t_list *begin_list, t_env *e);
void				print_color(t_list *begin_list, t_env *e);
void				print_tab(int *a, int *b, t_env *e, char *cmd);
void				print(t_env *e);
#endif
