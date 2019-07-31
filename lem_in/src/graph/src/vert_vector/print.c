/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:58:09 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/31 11:17:23 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph.h"

void		vert_vector_print(t_vert_vector *v)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	while (i < v->size)
	{
		if (v->data[i].prev == -1)
			s = NULL;
		else
			s = v->data[v->data[i].prev].name;
		ft_printf("(Name: %10s Prev: %10s Dist: %5ld Adj: ", v->data[i].name, s, v->data[i].dist);
		j = 0;
		while (v->data[i].adj != NULL && j < v->data[i].adj->size)
		{
			ft_printf("(%d: %d) ", v->data[i].adj->data[j].first, v->data[i].adj->data[j].second);
			++j;
		}
		ft_printf(")\n");
		++i;
	}
}
