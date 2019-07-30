/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:58:09 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/30 15:32:33 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph.h"

void		vert_vector_print(t_vert_vector *v)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < v->size)
	{
		ft_printf("(Name: %10s Prev: %5d Dist: %5d Adj: ", v->data[i].name, v->data[i].prev, v->data[i].dist);
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
