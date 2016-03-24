/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:15:54 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/03/24 17:23:06 by nahmed-m         ###   ########.fr       */
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
}					t_env;

/*
**	CMDS 
*/
void					cmd_sa_sb(int **tab);
void					cmd_ss(int **tab_a, int **tab_b);
void					cmd_pa_pb(int **src, int **dest);
void					cmd_ra_rb();

/*
** UTILS
*/
int						*args_to_tab(int *tab, int ac, char **av, t_env *e);
void					print_tab_a(int *tab, t_env *e);
void					print_tab_b(int *tab, t_env *e);
void					error();
#endif
